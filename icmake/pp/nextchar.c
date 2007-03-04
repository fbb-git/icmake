#include "icm-pp.h"

int nextchar()
{
    return fgetc(filestack[filesp].f);
}
