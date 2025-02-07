#include "../include/common.h"
#include "../include/vaddr.h"
#include "Vysyx_24080014_cpu.h" 
extern Vysyx_24080014_cpu dut;

extern uint32_t dut_npc;
extern uint32_t dut_pc;
uint8_t pmem[PMEM_MSIZE] = {};
static uint64_t timer = 0;

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - 0x80000000; }
uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + 0x80000000; }

static inline uint32_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    default: assert(0); return 0;
  }
}

static inline bool in_pmem(uint32_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}

static void pmem_write(uint32_t addr, int len, uint32_t data) {
  host_write(guest_to_host(addr), len, data);
}

static uint32_t pmem_read(uint32_t addr, int len) {
    uint32_t ret = host_read(guest_to_host(addr), len);
    return ret;
}
word_t vaddr_ifetch(vaddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, 4);
  printf("addr:%x\n",addr);
  return printf("%s\n", ANSI_FMT(str(erorr!), ANSI_FG_YELLOW ANSI_BG_RED));
}

word_t vaddr_read(vaddr_t addr, int len) {
  return pmem_read(addr, len);
}

void vaddr_write(vaddr_t addr, int len, word_t data) {
  pmem_write(addr, len, data);
}
extern void assert_fail_msg();
static void out_of_bound(paddr_t addr) {
  if(IRINGBUF) assert_fail_msg();
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, dut_pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  memset(pmem, rand(), CONFIG_MSIZE);
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) { 
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

uint32_t _pmem_read(uint32_t addr, int len) {
  uint8_t * paddr = (uint8_t*) guest_to_host(addr);
  switch (len) {
    case 1: return *(uint8_t  *)paddr;
    case 2: return *(uint16_t *)paddr;
    case 4: return *(uint32_t *)paddr;
  }
  assert(0);
}

extern "C" int rtl_pmem_read(int raddr,int *rdata){
  extern uint32_t inst;
  raddr = raddr & ~0x3u;  //字节对齐
  // if(raddr == 0xa0000048){
  //   timer = get_time()
  //   return (uint32_t)timer;
  // }
  if (raddr>=PMEM_START && raddr<=PMEM_END){
    *rdata = _pmem_read(raddr,4);
    IFDEF(DEBUG,Log("radrr = %x,rdata=%x\n",raddr,*rdata));
#ifdef CONFIG_MTRACE	
    IFDEF(DEBUG,Log("(npc csrc)read data = %x , read address = " FMT_PADDR " at pc = " FMT_WORD " with byte = 4",*rdata,raddr, dut_pc));	

#endif 
    return *rdata;
  }
  else //avoid latch.
    *rdata = 0;
    IFDEF(DEBUG,printf("rdata:%x\n",*rdata));
    return *rdata;
}

extern "C" void rtl_pmem_write(int waddr, int wdata, char wmask) {//waddr写入的目标地址，
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  waddr = waddr & ~0x3u;//地址对齐
  if(waddr == 0xa00003f8) {
    uint8_t ch = (uint8_t)(wdata & 0xff);
    putc(ch,stderr);
		return;
	}
  IFDEF(CONFIG_MTRACE,Log("(npc csrc)write init addr : 0x%x ,write_data : %x ,pc = 0x%x ",waddr,wdata,dut_pc));
  uint8_t *vaddr = guest_to_host(waddr);//物理地址转换
	uint8_t *iaddr;
	int i;
	int j;
	for(i = 0,j = 0;i < 4;i++){
		if(wmask & (1 << i)){
			iaddr = vaddr + i;//修改地址
			*iaddr = (wdata >> (j * 8)) & 0xFF;//写入
      IFDEF(DEBUG,Log("wirte : %x",*iaddr));
			j++;
		}
	}
}
