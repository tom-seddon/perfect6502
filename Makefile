OBJS=perfect6502.o netlist_sim.o
OBJS+=cbmbasic.o runtime.o runtime_init.o plugin.o console.o emu.o
#OBJS+=measure.o
CFLAGS=-Werror -Wall -O0
CC=clang

all: cbmbasic

cbmbasic: $(OBJS)
	$(CC) -o cbmbasic $(OBJS)

clean:
	rm -f $(OBJS) cbmbasic

