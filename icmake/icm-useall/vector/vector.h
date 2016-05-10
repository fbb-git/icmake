#ifndef INCLUDED_VECTOR_
#define INCLUDED_VECTOR_


typedef struct 
{
    int size;
    char **txt;
} Vector;
        

Vector *VectorCons();
void VectorDestructor(Vector *vector);

void add(Vector *vector, char const *txt);      // set operation: only once
void assign(Vector *vector, int idx, char const *txt);
void resize(Vector *vector, int newSize);
void replaceN(Vector *vector, int idx, char const *txt, int size);
void erase(Vector *vector, int idx);
int find(Vector *vector, char const *target);

inline char const *at(Vector const *vector, int idx)
{
    return vector->txt[idx];
}

inline int vSize(Vector const *vector)
{
    return vector->size;
}

#endif
