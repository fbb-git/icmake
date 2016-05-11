#include "dependencies.ih"

void d_closure(int *indicator, int row, int **data, int size)
{
    for (int idx = 0; idx != size; ++idx)   // visit row elements
    {
        if 
        (
            data[row][idx] == 0                 // no dep. for element idx
            ||                                  
            indicator[idx] == 1                 // or aloready marked
        )                                       
            continue;                           // then try the next one
                                                
        indicator[idx] = 1;                     // dependent on element idx
        d_closure(indicator, idx, data, size);  // add closure of elem. idx
     }
}
