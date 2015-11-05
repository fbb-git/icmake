#ifndef INCLUDED_SYMTAB_H_
#define INCLUDED_SYMTAB_H_

#include <stdio.h>

#include "../../rss/rss.h"

typedef enum 
{
    st_global = 0,      /* indices of gs_vars */
    st_local,           /* all larger values indicate a local var or param */
} SymtabType;
    
typedef struct 
{
    short idx;          /* if -1 global is undetermined */
    SymtabType type;
} SymtabIndex;

//size_t symtab_nfunctions();  /* returns the # defined functions */

void        symtab();   /* initializes the symbol table data structure.
                            call only once (not checked) */

int         symtab_findFun(); /* g_lexstring holds the name of a function 
                                returns its idx or -1 if not found       */
size_t      symtab_fun_nParams(size_t funIdx);
char const *symtab_funName(size_t funIdx); 
UNS16       symtab_funAddress(size_t funIdx); 
ExprType    symtab_funType(size_t funIdx);
ExprType    symtab_funParameterType(size_t funIdx, size_t paramIdx);

void        symtab_writeFunAddress(FILE *bin, size_t funidx);

size_t      symtab_lastFunction();    /* index of last defined function */

size_t      symtab_setLastFunction(size_t nParams); /* initializes the fields 
                                                 of the last defined function;
                                                 returns # local variables */

SymtabIndex symtab_defineVar(ExprType type); /* Define a var. at the topmost
                                                symbol table (.idx == -1 if 
                                                already def'd) */


size_t      symtab_nGlobals();       /* the number of global variables defined
                                        so far */
size_t      symtab_nLocals();        /* the number of local variables of the 
                                        function currently being defined */

ExprType    symtab_localType(size_t idx);   /* type of local variable idx, 1st 
                                                local var has idx 0 */

void        symtab_writeGlobals(FILE *bin);
void        symtab_setNparams();

void        symtab_cleanup();           /* pop all local variables */
void        symtab_pop();               /* remove the topmost local symtab  */


/////////////////////////////////////////////////////////////////////////////
// ExprType symtab_globalType(size_t idx);
// UNS16 *symtab_globalValue(size_t idx);

//int symtab_varIdx();         /* g_lexstring holds the name of a variable */
//                            /* returns its idx or -1 if not found       */
//
//
//
//void symtab_reset();          /* initialize the symtabs at function begin */
//void symtab_push();          /* initialize a new local symtab  */
//
//UNS16 const *symtab_funAddr();/* uses g_lexstring; returns address of fun    */
//
//
//Symbol *symtab_globalInfo(size_t idx);   /* info about global var 'idx' */
//
//    
//
//ExprType symtab_varType(size_t idx); /* type of variable idx */
//
//
//Symbol const *symtab_funInfo(size_t idx); /* Symtab record of function idx */
//
//
//int symtab_addFunction(ExprType type); /* add new function. returns 0 if 
//                                           added,  != 0 if already def'd    */

#endif

