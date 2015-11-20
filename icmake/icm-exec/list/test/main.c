#include "../list.h"

int main()
{
    ListVariable arr[10];

    for (int idx = 0; idx != 10; ++idx)     // simple construction and 
        listcons(arr + idx);              // destruction

    for (int idx = 0; idx != 10; ++idx)
        listDestructor(&arr[idx]);
                                            // initializing with static text
    listcons_charPtr(&arr[0], "hello world");
                                            
    for (int idx = 1; idx != 10; ++idx)     // initializing with copycons
        listcopycons(&arr[idx], &arr[idx - 1]);

    for (int idx = 0; idx != 10; ++idx)     // destruction of CC'd lists
        listDestructor(&arr[idx]);

                                            // initializing with static text
    listcons_charPtr(arr, "hello world");
                                            
    for (int idx = 1; idx != 10; ++idx)     // initializing with copycons
        listcopycons(&arr[idx], &arr[idx - 1]);


    for (int idx = 1; idx != 10; ++idx)     // assigning
        list_assign(arr + idx - 1, arr + idx);
    
    for (int idx = 0; idx != 10; ++idx)     // destruction
        listDestructor(&arr[idx]);

                                            // initializing with static text
    listcons_charPtr(&arr[0], "hello world");
                                            
    for (int idx = 1; idx != 10; ++idx)     // initializing with copycons
        listcopycons(&arr[idx], &arr[idx - 1]);


    for (int idx = 0; idx != 9; ++idx)     // adding
        list_add(arr + idx + 1, arr + idx);
    
    for (int idx = 0; idx != 10; ++idx)     // destruction
        listDestructor(&arr[idx]);

    char *ntbss[] = 
    {
        "a",
        "b",
        "c",
        "d",
        "e",
        NULL
    };

                                            // initializing with static text
    listcons_charPtrPtr(arr, ntbss);
    list_add_charPtr(arr, "f");

    ListVariable l2;
    listcons_charPtr(&l2, "c");

    list_sub(arr, &l2);
    
    for (size_t idx = 0; idx != list_size(arr); ++idx)
        printf("%s ", list_at(arr, idx));
    putchar('\n');

    listDestructor(&l2);
    listDestructor(arr);
}




