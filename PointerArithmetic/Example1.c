#include <stdio.h>

int main()
{

    int age = 27;
    int *ptr = &age;

    printf("ptr = %u \n", ptr);
    ptr++; // ptr++ and ptr = ptr + 1 are same both will increase the address(as per data types) by 4 bytes in this int type example
    // ptr = ptr + 1;
    printf("ptr = %u \n", ptr);
    ptr--;
    printf("ptr = %u \n", ptr);

    printf("-----------------------------------\n");
    /*
    - We can also substract one pointer from another
    - We can also compare 2 simiar type pointers
    - We cannot compare 2 different type of pointers i.e int* with char* ..we will get error
    */

   int id1 = 10;
   int id2 = 11;

   int *ptr1 = &id1;
   int *ptr2 = &id2;

   printf(" ptr1 = %u , ptr2 = %u and ptr1-ptr2 = %u \n" , ptr1 , ptr2 , ptr1 - ptr2);
   ptr2 = &id1;
   printf("Comparing ptr1 and ptr2 : %u \n ", ptr1 == ptr2);

    return 0;
}
