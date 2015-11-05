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

//size_t symtabNfunctions();  /* returns the # defined functions */

void symtab();              /* initializes the symbol table data structure.
                                call only once (not checked) */


int         symtabFindFun(); /* g_lexstring holds the name of a function 
                                returns its idx or -1 if not found       */
size_t      symtabFun_nParams(size_t funIdx);
char const *symtabFunName(size_t funIdx); 
UNS16       symtabFunAddress(size_t funIdx); 
ExprType    symtabFunType(size_t funIdx);
ExprType    symtabFunParameterType(size_t funIdx, size_t paramIdx);

void symtabWriteFunAddress(FILE *bin, size_t funidx);

size_t symtabLastFunction();    /* index of last defined function       */

SymtabIndex symtabDefineVar(ExprType type); /* Define a var. at the topmost
                                                symbol table (.idx == -1 if 
                                                already def'd) */


size_t symtab_nGlobals();       /* the number of global variables defined
                                     so far */
size_t symtab_nLocals();        /* the number of local variables of the 
                                    function currently being defined */

ExprType symtabLocalType(size_t idx);   /* type of local variable idx, 1st 
                                            local var has idx 0 */



void symtabWriteGlobal(FILE *bin, size_t idx);
void symtabSetNparams();





void symtabCleanup();           /* pop all local variables */
void symtabPop();               /* remove the topmost local symtab  */


// ExprType symtabGlobalType(size_t idx);
// UNS16 *symtabGlobalValue(size_t idx);

//int symtabVarIdx();         /* g_lexstring holds the name of a variable */
//                            /* returns its idx or -1 if not found       */
//
//
//
//void symtabReset();          /* initialize the symtabs at function begin */
//void symtabPush();          /* initialize a new local symtab  */
//
//UNS16 const *symtabFunAddr();/* uses g_lexstring; returns address of fun    */
//
//size_t symtabSetLastFunction(size_t nParams); /* initializes the fields of    */
//                                            /* the last defined function;   */
//                                            /* returns # local variables    */
//
//Symbol *symtabGlobalInfo(size_t idx);   /* info about global var 'idx' */
//
//    
//
//ExprType symtabVarType(size_t idx); /* type of variable idx */
//
//
//Symbol const *symtabFunInfo(size_t idx); /* Symtab record of function idx */
//
//
//int symtabAddFunction(ExprType type); /* add new function. returns 0 if 
//                                           added,  != 0 if already def'd    */

#endif

