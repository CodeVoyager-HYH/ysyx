#include "../include/common.h"
#include "../include/map.h"
#include "../include/addr.h"

#define IO_SPACE_MAX (32 * 1024 * 1024)

extern uint32_t dut_npc;
extern uint32_t dut_pc;
static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}

static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, dut_pc);
  } else {
    Assert(addr <= map->high && addr >= map->low,
        "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        addr, map->name, map->low, map->high, dut_pc);
  }
}

word_t map_read(paddr_t addr, int len, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  invoke_callback(map->callback, offset, len, false); // prepare data to read 回调函数
  word_t ret = host_read((uint8_t*)map->space + offset, len);
#ifdef CONFIG_DTRACE
  printf("[nemu dtrace read] name = %s : addr = %p at pc = " FMT_WORD " with byte = %d\n",map->name, (uint8_t*)map->space + offset, dut_pc, len);
#endif

  return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  host_write((uint8_t*)map->space + offset, len, data);
  invoke_callback(map->callback, offset, len, true);
#ifdef CONFIG_DTRACE
  printf("[nemu dtrace write] name = %s : addr = %p at pc = " FMT_WORD " with byte = %d and data = " FMT_WORD " \n",
        map->name, (uint8_t*)map->space + offset, dut_pc, len, data);
#endif

}

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

void init_map() {
  io_space = (uint8_t*)malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}
