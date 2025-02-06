#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t k = inl(KBD_ADDR);
  //因为keymap[scancode] | (is_keydown ? KEYDOWN_MASK : 0);
  //本身keymap最多有256个按键，所以最大也是256，但是掩码是0x8000，
  //所以十六位专门就是判断是否按下
  kbd->keydown = k & KEYDOWN_MASK;
  kbd->keycode = k & ~KEYDOWN_MASK;//相当于去除掩码造成的影响
}