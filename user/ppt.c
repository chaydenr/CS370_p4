#include "user.h"
#include "usys.pl"
#include "kernel/syscall.h"
#include "kernel/sysproc.c"
#include "kernel/defs.h"
#include "kernel/vm.c"

int main(int argc, char *argv[]) 
{
    pagetable_t pgtbl = myproc() -> pagetable;
    int lvl = 0;
    printf("Hello world (from Chayden)");
    printTable(pgtbl, lvl);
    return 0;
};
