#ifndef INCLUDED_OUT_
#define INCLUDED_OUT_

void out_init(char const *im, char const *pim);
void out(char const *text);
void out_space(void);
void out_nl(void);
void (*out_atEOF(void))(void);      /* returns a function to be called at
                                        EOF */
        
#endif
