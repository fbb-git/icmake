#ifndef INCLUDED_AUX_H_
#define INCLUDED_AUX_H_

#include <stddef.h>
#include <termios.h>
#include <unistd.h>

extern struct termios ga_termios; 

void aux_abnormal(int sig, int subcode);
void aux_cleanup();
char **aux_testRmBim(int *argcp, char **argv);
void aux_unlinkBim(void);

char const *aux_offset();           /* returns 4 char. hexstring of offset */
void    aux_set(unsigned offset);
    
#endif
