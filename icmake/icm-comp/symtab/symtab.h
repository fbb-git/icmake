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

size_t      symtab_fun_nParams(size_t funIdx);

void        symtab_newParam();  /* counts the number of params so far */

char const *symtab_funName(size_t funIdx); 

uint16_t       symtab_funAddress(size_t funIdx); 

ExprType    symtab_funType(size_t funIdx);

ExprType    symtab_funParameterType(size_t funIdx, size_t paramIdx);

void        symtab_writeFunAddress(FILE *bin, size_t funidx);

size_t      symtab_lastFunction(void);  /* index of last defined function */

void        symtab_setFunParams();      /* set nparams & types of the function
                                            that's currently being defined */

size_t      symtab_setFunctionInfo(size_t nParams); /* initializes the fields 
                                                 of the last defined function;
                                                 returns # local variables */

VarIndex    symtab_findVar(void);   /* idx and type of var. g_lextring, 
                                        or -1 */

VarIndex    symtab_defineVar(ExprType type); /* Define a var. at the topmost
                                                symbol table (.idx == -1 if 
                                                already def'd) */
ExprType    symtab_varType(VarIndex vi); /* type of variable vi */

size_t      symtab_nGlobals(void);   /* the number of global variables defined
                                        so far */
size_t      symtab_nLocals(void);    /* the number of local variables of the 
                                        function currently being defined */

ExprType    symtab_localType(size_t idx);   /* type of local variable idx, 1st 
                                                local var has idx 0 */

void        symtab_writeGlobals(FILE *bin);

void        symtab_setNparams(void);
size_t      symtab_nParams();

void        symtab_cleanup(void);       /* pop all local variables */

void        symtab_pop(void);           /* remove the topmost local symtab  */
void        symtab_push(void);          /* add a new nesting level  */

#endif



