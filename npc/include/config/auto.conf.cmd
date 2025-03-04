deps_config := \
	csrc/device/Kconfig \
	csrc/memory/Kconfig \
	csrc/isa/riscv32/Kconfig \
	/home/hyh/ysyx-workbench/npc/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
