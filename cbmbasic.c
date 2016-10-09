#include "perfect6502.h"
#include "runtime.h"
#include "runtime_init.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>

int
main()
{
    void *state=initAndResetChip();

    memset(memory,0,65536);

    memory[0xfffc]=0x10;
    memory[0xfffe]=0x30;

    memory[0x30]=0xea;

    for(int i=0;i<50;++i) {
        step(state);
        chipStatus(state);
    }
}
