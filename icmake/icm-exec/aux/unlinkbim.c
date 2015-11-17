#include "aux.ih"

void aux_unlinkBim()
{
    if (ga_bimname)
        unlink(ga_bimname);
}
