#include "util.ih"

void util_orSemErr(size_t value)
{
    gu_sem_err |= value;
}
