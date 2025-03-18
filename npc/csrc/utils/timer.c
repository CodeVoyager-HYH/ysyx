#include "../include/common.h"
#include <sys/time.h>
extern NPCState npc_state;
static unsigned long int next = 1;
static uint64_t boot_time = 0;
extern int gettimeofday (struct timeval *__restrict __tv,
			 void *__restrict __tz) __THROW __nonnull ((1));
     
static uint64_t get_time_internal() {
    struct timeval now;
    gettimeofday(&now, NULL);
    uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
    return us;
}
uint64_t get_time() {//获取开机的时间长度
    if (boot_time == 0) boot_time = get_time_internal();
    uint64_t now = get_time_internal();
    return now - boot_time;
}

void srand(unsigned int seed) {
  next = seed;
}

void init_rand() {
  srand(get_time_internal());
}