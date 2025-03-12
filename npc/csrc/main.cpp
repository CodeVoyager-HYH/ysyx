#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "verilated_vcd_c.h"  // 用于波形输出
#include "Vysyx_24080014_cpu.h"  // 顶层模块
#include "verilated.h"
#include <iostream>
#include "include/common.h"

extern int global_judge;
extern uint32_t* snpc;
uint32_t dut_pc = 0x80000000;
uint32_t dut_npc = 0x80000004;
extern uint32_t ins_val;
extern NPCState npc_state;
extern uint32_t inst;
void state_judge();
void npctrap();
void init_monitor(int argc, char **argv);
void sdb_mainloop();
Vysyx_24080014_cpu dut;
VerilatedContext* contextp = nullptr;
VerilatedVcdC* m_trace = nullptr;
uint32_t fetch_ins();
extern int cpu_gpr10;

extern "C" void get_pc(int pc){
    dut_pc = (uint32_t)pc;
}
extern "C" void get_npc(int npc){
    dut_npc = (uint32_t)npc;
}

extern uint32_t cpu_exec(uint64_t n);
extern void difftest_step();
int main(int argc, char** argv, char** env) {
    // 启用跟踪功能
    Verilated::traceEverOn(true);
    contextp = new VerilatedContext;
    m_trace = new VerilatedVcdC;  // 创建 VCD 跟踪对象
    contextp->commandArgs(argc, argv);
    
    IFDEF(CONFIG_WAVE_TRACE,dut.trace(m_trace, 1));  // 绑定 VCD 跟踪
    IFDEF(CONFIG_WAVE_TRACE,m_trace->open("wave.vcd"));  // 打开 wave.vcd 文件以保存波形

    // 初始化仿真
    
    init_monitor(argc, argv);
    // 初始化时钟信号和复位信号
      dut.clk = 1;
      dut.rst = 1;  // 启动时设置复位为高
      dut.eval();  // 初始化顶层模块状态
      //cpu_exec(1);
    
      IFDEF(CONFIG_WAVE_TRACE,m_trace->dump(contextp->time()));  // 记录初始状态
          
    npc_state.state = NPC_RUNNING;
    // 单周期仿真
    
    while (!contextp->gotFinish()) {
        // 在每个周期的前后设置时钟和复位信号
        dut.clk = 0;
        dut.rst = 1;
        dut.eval();  // 评估当前状态
        // 获取指令
        contextp->timeInc(1);  // 增加仿真时间
        IFDEF(CONFIG_WAVE_TRACE,m_trace->dump(contextp->time()));   // 写入波形数据

        dut.clk = 1;
        //dut.rst = 1;  // 解除复位
        sdb_mainloop();
        //m_trace->dump(contextp->time());  // 写入波形数据
        dut.eval();   // 评估电路状态
        contextp->timeInc(1);  // 增加仿真时间
        IFDEF(CONFIG_WAVE_TRACE,m_trace->dump(contextp->time()));   // 写入波形数据

        //ebreak退出---------------------------------
        if(global_judge == OK){
            set_npc_state(NPC_END, dut_pc, cpu_gpr[10]);
            state_judge();
            IFDEF(CONFIG_WAVE_TRACE,m_trace->close()); 
            
            if(cpu_gpr10 == 0)exit(0);
            else exit(1);
        }
        if(npc_state.state == NPC_QUIT){
            IFDEF(CONFIG_WAVE_TRACE,m_trace->close()); 
            Log("%s", ANSI_FMT("EXIT SUCCESS !", ANSI_FG_GREEN));
            exit(0);
        }

    }

    IFDEF(CONFIG_WAVE_TRACE,m_trace->close());   // 关闭波形文件void single_cycle(VerilatedContext* contextp) {
    dut.clk = 0;
    dut.eval();
    contextp->timeInc(1);  // 增加仿真时间
    dut.clk = 1;
    
    dut.eval();
    contextp->timeInc(1);  // 增加仿真时间
}