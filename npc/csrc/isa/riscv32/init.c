#include "../include/common.h"
extern int no_img;
extern long write_inst_to_mem() ;
uint8_t *pmem = NULL;
// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x00028823,  // sb  zero,16(t0)
  0x0102c503,  // lbu a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
  char str[20];  // 定义一个足够大的字符数组来存储转换后的字符串
  sprintf(str, "%u", RESET_VECTOR);  // 将 RESET_VECTOR 转换为字符串并存储到 str 中
}

long load_img(char *img_file) {
  if(img != NULL) Log("img_file = %s",img_file);
  if (img_file == NULL) {
    no_img = 1;
    printf("No image is given. Use the default build-in image.\n");
    long size = write_inst_to_mem() ;
    return size; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) printf("Can not open '%s'", img_file);
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);
  fclose(fp);
  return size;
}
