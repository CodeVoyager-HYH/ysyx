AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/linker.ld
LDFLAGS += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS += --gc-sections -e _start
NPCFLAGS +=   -l  $(shell dirname $(IMAGE).elf)/ins.txt 
NPCFLAGS += -e $(IMAGE).elf
NPCFLAGS += -d $(NEMU_HOME)/build/riscv32-nemu-interpreter-so

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = The insert-arg rule in Makefile will insert mainargs here.
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=\""$(MAINARGS_PLACEHOLDER)"\"

insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) "$(MAINARGS_PLACEHOLDER)" "$(mainargs)"

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: insert-arg
	@echo $(NPCFLAGS)
	@echo $(IMAGE)
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) sim ARGS="$(NPCFLAGS)"  IMG=$(IMAGE).bin


.PHONY: insert-arg clean
