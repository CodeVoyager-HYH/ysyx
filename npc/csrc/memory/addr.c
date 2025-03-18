#include "../include/common.h"
#include "../include/vaddr.h"
#include "Vysyx_24080014_cpu.h" 
#include "../include/addr.h"
extern Vysyx_24080014_cpu dut;
extern VerilatedContext* contextp; 
extern VerilatedVcdC *m_trace;

extern uint32_t dut_npc;
extern uint32_t dut_pc;
extern uint8_t *pmem ;
static uint64_t timer = 0;


word_t mmio_read(paddr_t addr, int len);
void mmio_write(paddr_t addr, int len, word_t data);

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - 0x80000000; }
uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + 0x80000000; }

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

  pmem = (uint8_t*)malloc(CONFIG_MSIZE);
  assert(pmem);
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

void delay_cycle(int n) {
  int j = n;
  //int i = 0;
for (int i = 0;i < n; i ++) {
//----------------------------------------------
    if(n!=1){
      if(j == n){
        dut.eval();  // 评估当前状态
        contextp->timeInc(1);  // 增加仿真时间
        IFDEF(CONFIG_WAVE_TRACE,m_trace->dump(contextp->time()));  // 写入波形数据
  
        //IFDEF(CONFIG_DIFFTEST, difftest_step());
      }

      dut.clk ^= 1;
      dut.eval();  // 评估当前状态
      contextp->timeInc(1);  // 增加仿真时间
      IFDEF(CONFIG_WAVE_TRACE,m_trace->dump(contextp->time()));  // 写入波形数据

      dut.clk ^= 1;
      dut.rst = 1;  // 解除复位
      dut.eval();  // 评估电路状态
        
      if(n>1){
        contextp->timeInc(1);  // 增加仿真时间
        IFDEF(CONFIG_WAVE_TRACE,m_trace->dump(contextp->time()));  // 写入波形数据

      }
    }  
  }
}



extern "C" int rtl_pmem_read(int raddr){//,int *rdata){
  //延迟
  delay_cycle(1);
  extern uint32_t inst;
  int rdata;  
  //if(alignment) raddr = raddr & ~0x3u;  //字节对齐
// uint32_t tem = pmem_read(0x80000418,4);
  //Log("=npc  0x800189c4 = 0x%x",tem);  

  if (raddr >= PMEM_START && raddr <= PMEM_END){//raddr = raddr & ~0x3u;
    rdata = _pmem_read(raddr,4);
    
    IFDEF(DEBUG,Log("radrr = %x,rdata=%x\n",raddr,rdata));
    IFDEF(CONFIG_MTRACE,Log("[mtrace](npc csrc)read data = %x , read address = " FMT_PADDR " at pc = " FMT_WORD " with byte = 4\n",rdata,raddr, dut_pc));	
    return rdata;
  }
  else if(raddr == RTC_ADDR){
    timer = get_time();
    return (uint32_t)timer;      
  }
  else if(raddr == RTC_ADDR + 4){
    timer = get_time();
    return (uint32_t)(timer>>32);      
  }
  else //avoid latch.
    rdata = 0;
    return rdata;
}

extern "C" void rtl_pmem_write(int waddr, int wdata, char wmask) {//waddr写入的目标地址，
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  
  delay_cycle(1);
  //waddr = waddr & ~0x3u;//地址对齐
  int i = 0;
	int j = 0;
  IFDEF(CONFIG_MTRACE,printf("(npc csrc)write init addr : 0x%x ,write_data : %x ,pc = 0x%x\n",waddr,wdata,dut_pc));

  if (waddr>=PMEM_START && waddr<=PMEM_END){
    uint8_t *vaddr = guest_to_host(waddr);//物理地址转换
  	uint8_t *iaddr;
	  for(i = 0,j = 0;i < 4;i++){
	  	if(wmask & (1 << i)){
	  		iaddr = vaddr + i;//修改地址
	  		*iaddr = (wdata >> (j * 8)) & 0xFF;//写入
       IFDEF(DEBUG,Log("wirte : %x",*iaddr));
	  		j++;
	  	}
	  }
  }
  int paddr = waddr;
  int data = wdata;
  if(waddr == SERIAL_PORT) {
		putc((char)wdata,stderr);
		return;
	}
}
