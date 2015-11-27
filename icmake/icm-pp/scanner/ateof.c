#include "scanner.ih"

void scanner_atEOF(void (*ptr)(void))
{
    sc_ptr = ptr;
}
