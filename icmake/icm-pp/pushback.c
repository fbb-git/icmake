#include "icm-pp.h"

void pushback(int ch)
{
    ungetc(ch, filestack[filesp].f);
}
