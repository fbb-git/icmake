#include "icmun.h"

void fun_push_1_jmp_end ()
{
    printf ("        push int 1, jmp [%s]\n", hexstring (curoffs + 2, 4));
}
