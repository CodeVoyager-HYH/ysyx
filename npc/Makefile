ifeq ($(wildcard $(NPC_HOME)/csrc/main.cpp),)
  $(error NPC_HOME=$(NPC_HOME) is not a NPC repo)
endif
-include $(NPC_HOME)/csrc/config/auto.conf
-include $(NPC_HOME)/csrc/config/auto.conf.cmd

remove_quote = $(patsubst "%",%,$(1))
#删除$(1)所有的的%
# Extract variabls from menuconfig
GUEST_ISA ?= $(call remove_quote,$(CONFIG_ISA))
#GUEST_ISA = riscv32
ENGINE ?= $(call remove_quote,$(CONFIG_ENGINE))
#ENGINE = interprete
NAME    = $(GUEST_ISA)-nemu-$(ENGINE)


CSRC = $(wildcard $(CDIR)/*.cpp)
CSRC += $(wildcard $(CDIR)/*.c)
VSRC = $(wildcard $(VDIR)/*.v)
CSRC += $(wildcard $(CDIR)/cpu/*.c)
CSRC += $(wildcard $(CDIR)/cpu/difftest/*.c)
CSRC += $(wildcard $(CDIR)/moniter/*.c)
CSRC += $(wildcard $(CDIR)/moniter/sdb/*.c)
CSRC += $(wildcard $(CDIR)/isa/riscv32/*.c)
CSRC += $(wildcard $(CDIR)/memory/*.c)
CSRC += $(wildcard $(CDIR)/utils/*.c)
CSRC += $(wildcard $(CDIR)/device/*.c)
CSRC += $(wildcard $(CDIR)/device/io/*.c)

VTOP = ysyx_24080014_cpu
VERILATOR = verilator
VERILATOR_FLAGS = --cc --exe --build --trace
VDIR = $(NPC_HOME)/vsrc
CDIR = $(NPC_HOME)/csrc
OBJDIR = $(NPC_HOME)/obj_dir
VCOMPILE = $(NPC_HOME)/obj_dir/Valu
IMG ?= ins.txt
IMG_DIR = $(abspath ./inst/$(notdir $(IMG)))
#构建模拟可执行文件
C_FLAGS += -CFLAGS "$(INCLUDE)"
NPC_ARGS = $(VERILATOR) $(C_FLAGS) --top-module $(VTOP) $(VERILATOR_FLAGS) $(VSRC) $(CSRC) /usr/lib/x86_64-linux-gnu/libreadline.so
OBJ_DIR = make -C $(NPC_HOME)/obj_dir -f  Vysyx_24080014_cpu.mk  Vysyx_24080014_cpu
INCLUDE_PATH = $(NPC_HOME)/csrc/include 
INCLUDE = $(addprefix -I, $(INCLUDE_PATH))

override ARGS ?= --log=$(NPC_HOME)/build/ins.txt

include $(NPC_HOME)/scripts/config.mk
#include $(NPC_HOME)/scripts/native.mk

all:
	@echo "Write this Makefile by your self."

#仿真
sim: 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	rm -rf $(NPC_HOME)/obj_dir
	rm -rf $(NPC_HOME)/wave.vcd
	@echo $(CSRC)
	$(NPC_ARGS) 
	$(OBJ_DIR)
	$(OBJDIR)/Vysyx_24080014_cpu $(ARGS)  $(IMG)
#	gtkwave wave.vcd

run: 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	rm -rf $(NPC_HOME)/obj_dir
	rm -rf $(NPC_HOME)/wave.vcd
	@echo $(CSRC)
	$(NPC_ARGS) 
	$(OBJ_DIR)
	$(OBJDIR)/Vysyx_24080014_cpu $(ARGS)  
#	gtkwave wave.vcd
#波形图
wave: sim
#	@(MAKE) -C $(OBJDIR) -f Vysyx_24080014_cpu.mk Vysyx_24080014_cpu
#	$(OBJDIR)/Vysyx_24080014_cpu
	gtkwave wave.vcd

clean:
	rm -rf $(NPC_HOME)/obj_dir
	rm -rf $(NPC_HOME)/wave.vcd

.PHONY: run sim all	 NPC_ARGS clean 