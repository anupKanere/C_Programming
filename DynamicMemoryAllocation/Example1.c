#include <stdio.h>
#include <stdlib.h>
/*
calloc() , malloc() , free() and realloc() these are 4 func used in dynamic memory allocation
Dynamic memory allocation is a process of allocating a memory to data structures during runtime
free() : it is used to free the memory which is allocated by calloc() and malloc()
realloc() : reallocate (increase or decrease) memory using the same pointer & size.
*/

int main()
{
    //malloc() : malloc = memory allocation
    int *ptr;
    // Note : if the required memory is not available in the system then null will be stored in ptr
    ptr = (int *)malloc(5 * sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", ptr[i]);
    }

    //calloc() // calloc = continuous allocation
    int *ptr1;
    ptr1 = (int *)calloc(5, sizeof(int));

    ptr1[0] = 11;
    ptr1[1] = 21;
    ptr1[2] = 31;
    ptr1[3] = 41;
    ptr1[4] = 51;

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", ptr1[i]);
    }
    return 0;
}