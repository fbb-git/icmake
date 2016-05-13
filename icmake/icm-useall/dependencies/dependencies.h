#ifndef INCLUDED_DEPENDENCIES_
#define INCLUDED_DEPENDENCIES_


void DependenciesCons();

int depSize();
char const *depDir(int idx);
char const *depGch(int idx);
char const *depUseAll(int idx);
int const *depDependent(int idx);
int const *depUseAllExists();
int *depGchIndicator();

#endif




