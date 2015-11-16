#include "aux.ih"

void aux_unlinkBim()
{
    if (ga_bimname[0])
        unlink(ga_bimname);
}
