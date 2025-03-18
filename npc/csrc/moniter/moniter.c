#include <getopt.h>
#include "../include/common.h"
#include "../include/macro.h"
#include <readline/readline.h>
#include <readline/history.h>
#include "verilated_vcd_c.h"  // 用于波形输出
#include "Vysyx_24080014_cpu.h"  // 顶层模块
#include "verilated.h"

void init_device() ;
void init_rand();
void init_log(const char *log_file) ;
void init_ftrace(const char *elf_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size);
void init_device();
void init_sdb();
void init_disasm(const char *triple);
void init_isa();
void sdb_set_batch_mode();
// int a = 0;

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NPC!\n", ANSI_FMT(str(riscv), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {"img"      , required_argument, NULL, 'i'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode();printf("-b\n"); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg ;printf("log_file = %s\n",log_file); break;
      case 'e': elf_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg;printf("img_file = %s\n",img_file); break;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=FILE           parse elf form FILE\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

extern long load_img(char *img_file);

void init_monitor(int argc, char **argv) {
  /* Parse arguments. */
  parse_args(argc, argv);
  
  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);
  
  /*init elf_file*/
  IFDEF(CONFIG_FTRACE, init_ftrace(elf_file));
  
  /* Initialize memory. */
  init_mem();
  
  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());
  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img(img_file);
  
  /* Initialize differential testing. */
  IFDEF(CONFIG_DIFFTEST,init_difftest(diff_so_file, img_size));
  /* Initialize the simple debugger. */
  init_sdb();
  //===========================================================反汇编
  init_disasm((MUXDEF(CONFIG_RV64, "riscv64","riscv32")"-pc-linux-gnu"));
  //==============================================================
  /* Initialize differential testing. */
  welcome();
}

//===============================ftrace======================================
#ifdef CONFIG_FTRACE
typedef struct {
    char name[64];
    paddr_t addr;      //the function head address
    Elf32_Xword size;
} Symbol;

Symbol *s_table = NULL;  //储存符号表的函数信息
int func_num = 0;//记录符号表中函数的个数
void init_ftrace(const char *elf_file)
{
    //==================================判断文件是否正确=================================
    if(elf_file == NULL){
      printf("elf_file == NULL\n");
      return;
    } 
    
    FILE *fp;
    fp = fopen(elf_file, "rb");
    
    if(fp == NULL)
    {
        printf("failed to open the elf file!\n");
        exit(0);
    }
	
    Elf32_Ehdr edhr;
	  //读取elf头
    if(fread(&edhr, sizeof(Elf32_Ehdr), 1, fp) <= 0)
    {
        printf("fail to read the elf_head!\n");
        exit(0);
    }
    //判断是不是一个elf文件
    if(edhr.e_ident[0] != 0x7f || edhr.e_ident[1] != 'E' || 
       edhr.e_ident[2] != 'L' ||edhr.e_ident[3] != 'F')
    {
        printf("The opened file isn't a elf file!\n");
        exit(0);
    }
    //移动到节头表
    fseek(fp, edhr.e_shoff, SEEK_SET);// e_shoff节头表偏移量

    Elf32_Shdr shdr;
    char *string_table = NULL;
    //寻找字符串表
    for(int i = 0; i < edhr.e_shnum; i++)// e_shnum节头表中的条目数量
    {
        if(fread(&shdr, sizeof(Elf32_Shdr), 1, fp) <= 0)//节头信息读取到shdr
        {
            printf("fail to read the shdr\n");
            exit(0);
        }
        
        if(shdr.sh_type == SHT_STRTAB)//找到字符串表
        {
            //获取字符串表
            string_table = (char *)malloc(shdr.sh_size);
            fseek(fp, shdr.sh_offset, SEEK_SET);//移动到在符号表的偏移位置
            if(fread(string_table, shdr.sh_size, 1, fp) <= 0)//保存符号表的内容
            {
                printf("fail to read the strtab\n");
                exit(0);
            }
        }
    }
    
    //===============================================寻找符号表
    fseek(fp, edhr.e_shoff, SEEK_SET);//移动到节头表
    
    for(int i = 0; i < edhr.e_shnum; i++)
    {
        if(fread(&shdr, sizeof(Elf32_Shdr), 1, fp) <= 0)
        {
            printf("fail to read the shdr\n");
            exit(0);
        }

        if(shdr.sh_type == SHT_SYMTAB)//寻找到字符串表
        { 
            fseek(fp, shdr.sh_offset, SEEK_SET);

            Elf32_Sym sym;

            size_t sym_count = shdr.sh_size / shdr.sh_entsize;//符号表中符号的数量
            s_table = (Symbol*)malloc(sizeof(Symbol) * sym_count);

            for(size_t j = 0; j < sym_count; j++)
            {
                if(fread(&sym, sizeof(Elf32_Sym), 1, fp) <= 0)
                {
                    printf("fail to read the symtab\n");
                    exit(0);
                }

                if(ELF32_ST_TYPE(sym.st_info) == STT_FUNC)
                {
                    const char *name = string_table + sym.st_name;
                    strncpy(s_table[func_num].name, name, sizeof(s_table[func_num].name) - 1);
                    s_table[func_num].addr = sym.st_value;
                    s_table[func_num].size = sym.st_size;
                    func_num++;
                }
            }
        }
    }
    fclose(fp);
    for(int i = 0; i < func_num; i++){
      printf("[ftrace] name:%s\taddr:0X%x\tsize:%ld\n",s_table[i].name,s_table[i].addr,s_table[i].size);
    }
    free(string_table);
}

int rec_depth = 1;
void call_func()
{
    int i = 0;
    for(; i < func_num; i++)
    {//用地址判断函数
        if( dut_pc >= s_table[i].addr &&  dut_pc < (s_table[i].addr + s_table[i].size))
        {
            break;
        }
    }
    printf("0x%08x:", dut_pc);

    for(int k = 0; k < rec_depth; k++) printf("  ");

    rec_depth++;

    printf("call  [%s@0x%08x]\n", s_table[i].name,  dut_pc);
}

void ret_func()
{
    int i = 0;
    for(; i < func_num; i++)
    {
        if(dut_pc >= s_table[i].addr && dut_pc < (s_table[i].addr + s_table[i].size))
        {
            break;
        }
    }
    printf("0x%08x:", dut_pc);

    rec_depth--;

    for(int k = 0; k < rec_depth; k++) printf("  ");

    printf("ret  [%s]\n", s_table[i].name);
}
bool prev_call = false;
bool prev_ret = false;
void ftrace_check_inst(uint32_t inst)
{
    if (prev_call)
        call_func();
    if (prev_ret)
        ret_func();
    if (((inst & 0xfff) == 0xef) || ((inst & 0x7fff) == 0xe7))
        prev_call = true;
    else
        prev_call = false;

    if (inst == 0x8067)
        prev_ret = true;
    else
        prev_ret = false;

}
#endif