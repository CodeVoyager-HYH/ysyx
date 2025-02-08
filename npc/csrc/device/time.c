#include "../include/common.h"
#include "../include/map.h"
#include "../include/alarm.h"

static uint32_t *rtc_port_base = NULL;
extern NPCState npc_state;

static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
  assert(offset == 0 || offset == 4);
  if (!is_write && offset == 4) {
    uint64_t us = get_time();//获取开机的时间段：当前时间-开机时间
    rtc_port_base[0] = (uint32_t)us;//保存的是us的低32位
    rtc_port_base[1] = us >> 32;//保存的是us的高32位
  }
}
void dev_raise_intr() {
}
#ifndef CONFIG_TARGET_AM
static void timer_intr() {
  if (npc_state.state == NPC_RUNNING) {
    //extern void dev_raise_intr();
    dev_raise_intr();
  }
}
#endif

void init_timer() {
  rtc_port_base = (uint32_t *)new_space(8);//八字节的mmio空间
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("rtc", CONFIG_RTC_PORT, rtc_port_base, 8, rtc_io_handler);
#else
  //add_mmio_map("rtc", CONFIG_RTC_MMIO, rtc_port_base, 8, rtc_io_handler);//注册一个端口映射io的关系，CONFIG_RTC_MMIO == RTC_ADDR
#endif
  IFNDEF(CONFIG_TARGET_AM, add_alarm_handle(timer_intr));
}
