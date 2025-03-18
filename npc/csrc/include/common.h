#ifndef _COMMON_H_
#define _COMMON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include <stdbool.h>
#include <inttypes.h>
#include <string.h>
#include "../include/generated/autoconf.h"
#include <elf.h>
#include "Vysyx_24080014_cpu__Dpi.h"
#include <verilated_dpi.h>
#include <getopt.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "verilated_vcd_c.h"  // 用于波形输出
#include "Vysyx_24080014_cpu.h"  // 顶层模块
#include "verilated.h"

//#include "Log.h"
#include "macro.h"
#define OK 1
#define ERROR 0
#define str_temp(x) #x
#define str(x) str_temp(x)
#define ANSI_FMT(str, fmt) fmt str ANSI_NONE
#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)
#define INST_START 0x80000000
#define PMEM_START 0x80000000
#define PMEM_END   0x87ffffff
#define PMEM_MSIZE (PMEM_END+1-PMEM_START)
#define likely(cond)   __builtin_expect(cond, 1)
#define MAX_INST_TO_PRINT 10
#define PMEM_LEFT  ((uint32_t)0x80000000)
#define PMEM_RIGHT ((uint32_t)0x88000000 - 1)
#define RESET_VECTOR (PMEM_LEFT)
#define FMT_PADDR MUXDEF(PMEM64, "0x%016" PRIx64, "0x%08" PRIx32)
//===========================konfig=======================================
#define ITRACE_COND 1
#define IRINGBUF 0//IRINGBUF
//====================================================================================
extern uint32_t cpu_gpr[20];
extern uint32_t dut_pc;
extern uint32_t ins_val;

typedef uint16_t ioaddr_t;
typedef uint32_t word_t;
typedef uint32_t paddr_t;
typedef word_t vaddr_t;

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };
typedef struct {
  int state;
  uint32_t halt_pc;
  uint32_t halt_ret;
} NPCState;

//void host_write(void *addr, int len, uint32_t data);
#define MUXDEF(macro, X, Y)  MUX_MACRO_PROPERTY(__P_DEF_, macro, X, Y)
uint8_t* guest_to_host(uint32_t paddr);
uint32_t host_to_guest(uint8_t *haddr);
static void pmem_write(uint32_t addr, int len, uint32_t data);
void checkWatchPoint();
void watchpoint_create(char *args, word_t res);
word_t expr(char *e, bool *success);
void watchpoint_print();
void free_wp(int no);
word_t expr(char *e, bool *success);
static uint32_t pmem_read(uint32_t addr, int len);

void sdb_mainloop();
word_t paddr_read(paddr_t addr, int len);
uint32_t fetch_ins();
uint64_t get_time() ;
void set_npc_state(int state, vaddr_t pc, int halt_ret) ;
void isa_reg_display();
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
static inline void host_write(void *addr, int len, uint32_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
  }
}


//---------------------------------------------isa.h
#define ISA_QEMU_BIN "qemu-system-riscv32"
#define ISA_QEMU_ARGS "-bios", "none",


union isa_gdb_regs {
  struct {
#if defined(CONFIG_ISA_mips32)
    uint32_t gpr[32];
    uint32_t status, lo, hi, badvaddr, cause, pc;
#elif defined(CONFIG_ISA_riscv) && !defined(CONFIG_RV64)
    uint32_t gpr[32];
    uint32_t pc;
#elif defined(CONFIG_ISA_riscv) &&  defined(CONFIG_RV64)
    uint64_t gpr[32];
    uint64_t fpr[32];
    uint64_t pc;
#elif defined(CONFIG_ISA_x86)
    uint32_t eax, ecx, edx, ebx, esp, ebp, esi, edi;
    uint32_t eip, eflags;
    uint32_t cs, ss, ds, es, fs, gs;
#elif defined(CONFIG_ISA_loongarch32r)
  uint32_t gpr[32];
  uint32_t pc;
#endif
  };
  struct {
    uint32_t array[77];
  };
};
typedef struct {
  uint32_t x[32];
  uint32_t pc;
  uint32_t mepc;
  uint32_t mcause;
  uint32_t mtvec;
  uint32_t mstatus;
} regfile;

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} CPU_state;

typedef struct Decode {
  vaddr_t pc;
  vaddr_t snpc; // static next pc
  vaddr_t dnpc; // dynamic next pc
  vaddr_t inst;
  char logbuf[128];
} Decode;

word_t isa_reg_str2val(const char *name, bool *success);
//============================================================================Log.h

#define ANSI_FG_BLACK   "\33[1;30m"
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;45m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_NONE       "\33[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE


#define _Log(...) \
  do { \
    printf(__VA_ARGS__); \
  } while (0)

#define Log(format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define Assert(cond, format, ...) \
  do { \
    if (!(cond)) { \
      MUXDEF(CONFIG_TARGET_AM, printf(ANSI_FMT(format, ANSI_FG_RED) "\n", ## __VA_ARGS__), \
        (fflush(stdout), fprintf(stderr, ANSI_FMT(format, ANSI_FG_RED) "\n", ##  __VA_ARGS__))); \
      IFNDEF(CONFIG_TARGET_AM, extern FILE* log_fp; fflush(log_fp)); \
      extern void assert_fail_msg(); \
      assert(cond); \
    } \
  } while (0)
#define panic(format, ...) Assert(0, format, ## __VA_ARGS__)


#endif