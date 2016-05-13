#include "rss.ih"

// a younger b, a newer b: returns 1 if file a is more recent than file b. The
// files a and b do not have to exist: if both don’t exist 0 is returned; if b
// doesn’t exist, 1 is returned; if a doesn’t exist 0 is returned; if they are
// equally old 0 is returned. 


int rss_younger(char const *lval, char const *rval)
{
    struct stat
        lbuf,
        rbuf;

    if (stat(lval, &lbuf))
        lbuf.st_mtime = 0;

    if (stat(rval, &rbuf))
        rbuf.st_mtime = 0;

   return lbuf.st_mtime > rbuf.st_mtime;
}
