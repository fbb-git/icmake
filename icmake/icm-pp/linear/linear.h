#ifndef INCLUDED_LINEAR_H_
#define INCLUDED_LINEAR_H_

typedef struct
{
    char *id;
    char *definition;
} Linear;

Linear const   *linear_search(char const *ident);
                                                    /* add: ident may not yet
                                                        have been stored */
void            linear_add(char const *ident, char const *definition); 
int             linear_undef(char const *ident);    /* return 1: OK */

void            linear_show();                      /* defined symbols to 
                                                       stdout */

#endif
