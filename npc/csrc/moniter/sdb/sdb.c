#include "../include/common.h"

static int is_batch_mode = false;
void init_regex();
void init_wp_pool();
void watchpoint_create(char *args, int32_t res);
void free_wp(int no);
void watchpoint_print();
word_t expr(char *e, bool *success);
extern NPCState npc_state;
extern uint32_t cpu_exec(uint64_t n);
static int cmd_c(char *args);
static int cmd_q(char *args);
static int cmd_d(char *args);
static int cmd_p(char *args);
static int cmd_si(char *args);
static int cmd_help(char *args);
static int cmd_info(char *args);
int quit = 0;

static int cmd_x(char *args){
  //parse argument 
  char* var1 = strtok(args," ");
  char* var2 = strtok(NULL," ");
  int len = 0;
  //判断是否有输入
  if(var1 == NULL){printf("Please enter an argument!\n"); return 1;}
  if(var2 == NULL){printf("Please enter an argument!\n"); return 1;}
  paddr_t addr = 0;
  sscanf(var1, "%d", &len);
  sscanf(var2,"%x", &addr);
  
  for(int i = 0 ; i < len ; i ++)
  {
      printf("0x%08x = 0x%08x\n",addr,paddr_read(addr,4));
      addr = addr + 4;
  }
  return 0;
}

static int cmd_p(char *args){
  bool success=true;
  int32_t res = expr(args, &success);Log("error");
  if(!success){Log("error");
    printf("Invalid expression.Please enter a right expression.\n");
    return 1;
  }
  else {
    Log("error");
    printf("%d\n", res);
    return 0;
  }
  Log("ERROR in cmd_p");
  return 0; 
}

static int cmd_w(char *args){
  bool success = true;
  word_t exprAns;
  char express[65536];

  if (strlen(args) <= 0){
    printf("Please enter the argument!\n");
    return 1;
  }
  /*检查表达式是否正确是必要的*/
  exprAns = expr(args, &success);
  if (success == false){
    printf("express is error\n");
    return 1;
  }
  Assert(strlen(args) < 65536, "express is too long in cmd_w");
  strncpy(express, args, strlen(args));
  express[strlen(args)] = '\0';
  //这里直接传递args会有奇怪的错误
  watchpoint_create(express, exprAns);

  return 0;
}
//--------------------------------操作
static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  {"si","Pause the program after stepping through N instructions,When N is not given, it defaults to 1", cmd_si },
  {"info","Print register status", cmd_info },
  {"x","Find the value of the expression EXPR as the starting memory address, and output N consecutive 4-byte outputs in hexadecimal",cmd_x},
  {"p","Calculate the value of the expression after calculating p", cmd_p },
  {"d","Delete monitoring point with serial number N",cmd_d},
  {"w","Pause program execution when the value of expression EXPR changes",cmd_w},	

  /* TODO: Add more commands */

};
#define NR_CMD ARRLEN(cmd_table)
//----------------------------------------------------删除监视点
static int cmd_d(char *args){
  int no = -1;
  sscanf(args,"%d",&no);
   //bool success = true;
  if(no <= -1){
    printf("Please enter a right argument!\n");
    return 1;
  }
  else{
    free_wp(no);
    return 0;
  }
  Log("ERROR in cmd_d");
  return 0;
}
//------------------------------------打印寄存器
static int cmd_info(char *args){
  char *arg = strtok(args," ");
  if(arg == NULL){
    printf("PLEASR ENTER AN ARGUMNET\n");
    return 1;}
  else if (*arg == 'r'){
    isa_reg_display();
    return 0;
  }
  else if (*arg == 'w'){
    watchpoint_print();
    return 0;
  }
  else {
    printf("Don't have this argument\n");
    return 1;
  }
  Log("ERROR in cmd_info");
  return 0;
}
//-------------------------------------退出
static int cmd_q(char *args) {
  npc_state.state = NPC_QUIT;
  return -1;
}
//------------------------------------帮助
static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command %s\n", arg);
  }
  return 0;
}

//--------------------------------单步执行
static int cmd_si(char *args){
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    i = 1;
  }
  else {
    sscanf (arg, "%d", &i);
    printf("si_i=%d\n",i);
  }
  quit =1;
  cpu_exec(i);
  return 0;
}

//----------------------------------------cmd_c
static int cmd_c(char *args){
  is_batch_mode = 1;
  quit = 1;
  uint32_t inst = cpu_exec(-1);//,pc);
  return 0;
}
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}
extern uint32_t cpu_gpr[20] ;
void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();

}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop(){
  if(is_batch_mode == 1) {
    cmd_c(NULL);
    return;
  }
  quit = 0;
  while(1){
    for (char *str; (str = rl_gets()) != NULL; ) {
     char *str_end = str + strlen(str);
      
      /* extract the first token as the command */
      char *cmd = strtok(str, " ");
      if (cmd == NULL) { continue;}

      /* treat the remaining string as the arguments,
         which may need further parsing
      */
      char *args = cmd + strlen(cmd) + 1;
      if (args >= str_end) {
        args = NULL;
      } 

      int i;
      for (i = 0; i < NR_CMD; i ++) {
        if (strcmp(cmd, cmd_table[i].name) == 0) {
          if (cmd_table[i].handler(args) < 0) {return; }
            break;
        }
      }
      if(quit == 1 ) { return;}
      if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
    }
    if(quit == 1 ) {break;}
  }
}
