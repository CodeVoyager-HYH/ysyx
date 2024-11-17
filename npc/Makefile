NPC_EXEC ?= $(IMG) $(ELF)
CSRC = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
VSRCS = $(shell find $(./vsrc) -name "*.v")

all:
	@echo "Write this Makefile by your self."

#仿真
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo $(VSRCS)
	verilator --trace --cc --exe --build \
    --top-module top \
    -I$(INCLUDE) ./csrc/sim_main.cpp $(VSRCS) \
	-LDFLAGS -"lreadline"
#波形图
wave: sim
	./obj_dir/Vtop
	gtkwave wave.vcd

run:$(CSRC)
	$(NPC_EXEC)

clean:
	rm -rf obj_dir
	rm wave.vcd

.PHONY: run  sim all	

include ../Makefile
