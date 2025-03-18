#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  int i;
  int w = 400;  // TODO: get the correct width
  int h = 300;  // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t screen = inl(VGACTL_ADDR);
  uint32_t width  = screen >> 16;//高十六位
  uint32_t height = screen & 0xFFFF;//低十六位
  uint32_t vmemsz = width * height * sizeof(uint32_t);
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width, .height = height,
    .vmemsz = vmemsz
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  //左上角是(0,0)，以行优先存储
  int x = ctl->x;
  int y = ctl->y;
  uint32_t *pixels = ctl->pixels;
  int w = ctl->w;
  int h = ctl->h;
  uint32_t screen_w = inl(VGACTL_ADDR) >> 16;

  for (int i = y; i < y + h; i++) {
    for (int j = x; j < x + w; j++) {
      outl(FB_ADDR + (i * screen_w + j) * 4, pixels[w * (i - y) + (j - x)]);
    }
  }
  if (ctl->sync) {//判断是否需要刷新
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
