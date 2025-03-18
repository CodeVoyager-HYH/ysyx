#***************************************************************************************
# Copyright (c) 2014-2024 Zihao Yu, Nanjing University
#
# NEMU is licensed under Mulan PSL v2.
# You can use this software according to the terms and conditions of the Mulan PSL v2.
# You may obtain a copy of Mulan PSL v2 at:
#          http://license.coscl.org.cn/MulanPSL2
#
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
# EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
# MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
#
# See the Mulan PSL v2 for more details.
#**************************************************************************************/

-include $(NEMU_HOME)/../Makefile
include $(NEMU_HOME)/scripts/build.mk
#build.mk就是有关编译的内容
include $(NEMU_HOME)/tools/difftest.mk

compile_git:
	$(call git_commit, "compile NEMU")
$(BINARY):: compile_git
#BINARY = $(WORK_DIR)/build/riscv32-nemu-interprete -so
# Some convenient rules

override ARGS ?= --log=$(BUILD_DIR)/nemu-log.txt
override ARGS += $(ARGS_DIFF)
#ARGS = --log=$(WORK_DIR)/build/nemu-log.txt --diff=riscv32-nemu-interprete/tools/spike-diff/build/riscv32-spike-so
# Command to execute NEMU 执行nemu的命令
IMG ?=
NEMU_EXEC := $(BINARY) $(ARGS) $(IMG)
#NEMU_EXEC = build/riscv32-nemu-interprete -so /build/nemu-log.txt --diff=riscv32-nemu-interprete/tools/spike-diff/build/riscv32-spike-so
run-env: $(BINARY) $(DIFF_REF_SO)

run: run-env
	$(call git_commit, "run NEMU")
	$(NEMU_EXEC)

gdb: run-env
	$(call git_commit, "gdb NEMU")
	gdb -s $(BINARY) --args $(NEMU_EXEC)

clean-tools = $(dir $(shell find ./tools -maxdepth 2 -mindepth 2 -name "Makefile"))
$(clean-tools):
	-@$(MAKE) -s -C $@ clean
clean-tools: $(clean-tools)
clean-all: clean distclean clean-tools

.PHONY: run gdb run-env clean-tools clean-all $(clean-tools)