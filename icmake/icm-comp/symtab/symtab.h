#ifndef INCLUDED_SYMTAB_H_
#define INCLUDED_SYMTAB_H_

#include <stdio.h>

#include "../../rss/rss.h"

typedef enum 
{
    st_global = 0,      /* indices of gs_vars */
    st_local,           /* all larger values indicate a local var or param */
} VarType;
    
typedef struct 
{
    short idx;          /* if -1 variable does not exist */
    VarType type;
} VarIndex;


void        symtab(void);   /* initializes the symbol table data structure.
                            call only once (not checked) */

                                /* 0: function added, -1: already def'd */
int         symtab_addFunction(ExprType type);

int         symtab_findFun(void); /* util_string() holds the name of a function 
                                returns its idx or -1 if not found       */

unsigned      symtab_fun_nParams(unsigned funIdx);

void        symtab_newParam();  /* counts the number of params so far */

char const *symtab_funName(unsigned funIdx); 

uint16_t       symtab_funAddress(unsigned funIdx); 

ExprType    symtab_funType(unsigned funIdx);

ExprType    symtab_funParameterType(unsigned funIdx, unsigned paramIdx);

void        symtab_writeFunAddress(FILE *bin, unsigned funidx);

unsigned      symtab_lastFunction(void);  /* index of last defined function */

void        symtab_setFunParams();      /* set nparams & types of the function
                                            that's currently being defined */

unsigned      symtab_setFunctionInfo(unsigned nParams); /* initializes the fields 
                                                 of the last defined function;
                                                 returns # local variables */

VarIndex    symtab_findVar(void);   /* idx and type of var. g_lextring, 
                                        or -1 */

VarIndex    symtab_defineVar(ExprType type); /* Define a var. at the topmost
                                                symbol table (.idx == -1 if 
                                                already def'd) */
ExprType    symtab_varType(VarIndex vi); /* type of variable vi */

unsigned      symtab_nGlobals(void);   /* the number of global variables defined
                                        so far */
unsigned      symtab_nLocals(void);    /* the number of local variables of the 
                                        function currently being defined */

ExprType    symtab_localType(unsigned idx);   /* type of local variable idx, 1st 
                                                local var has idx 0 */

void        symtab_writeGlobals(FILE *bin);

void        symtab_setNparams(void);
unsigned      symtab_nParams();

void        symtab_cleanup(void);       /* pop all local variables */

void        symtab_pop(void);           /* remove the topmost local symtab  */
void        symtab_push(void);          /* add a new nesting level  */

#endif



