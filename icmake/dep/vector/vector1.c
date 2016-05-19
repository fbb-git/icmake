#include "vector.ih"

Vector *VectorCons()
{
    Vector *ret = rss_realloc(0, sizeof(Vector));
    memset(ret, 0, sizeof(Vector));
    return ret;
}
