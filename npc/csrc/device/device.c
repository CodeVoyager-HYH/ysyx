#include "../include/common.h"
#include "../include/alarm.h"
#ifndef CONFIG_TARGET_AM
#include <SDL2/SDL.h>
#endif

void init_map();
void init_serial();
void init_timer() ;
void init_vga();
void init_i8042();
void init_audio();
void init_disk();
void init_sdcard();
void init_alarm();

void send_key(uint8_t, bool);
void vga_update_screen();

extern NPCState npc_state;

void device_update() {//用于检查是否需要更新设备
  static uint64_t last = 0;
  uint64_t now = get_time();
  if (now - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = now;

//   IFDEF(CONFIG_HAS_VGA, vga_update_screen());

// #ifndef CONFIG_TARGET_AM
//   SDL_Event event;
//   while (SDL_PollEvent(&event)) {
//     switch (event.type) {
//       case SDL_QUIT:
//         npc_state.state = NPC_QUIT;
//         break;
// #ifdef CONFIG_HAS_KEYBOARD
//       // If a key was pressed
//       case SDL_KEYDOWN:
//       case SDL_KEYUP: {
//         uint8_t k = event.key.keysym.scancode;
//         bool is_keydown = (event.key.type == SDL_KEYDOWN);
//         send_key(k, is_keydown);
//         break;
//       }
// #endif
//       default: break;
//     }
//   }
// #endif
}

void init_device() {
  //IFDEF(CONFIG_TARGET_AM, ioe_init());
  init_map();//初始化io空间，p_space指向io

  IFDEF(CONFIG_HAS_SERIAL, init_serial());
  IFDEF(CONFIG_HAS_TIMER, init_timer());

}