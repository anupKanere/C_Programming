#include <stdio.h>

int main()
{

    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("x     = %d \n", x);     // 0
    printf("*ptr  = %d \n", *ptr);  // 0
    printf("add of x = %p \n", &x); // &x and ptr will be same here

    *ptr += 5;
    printf("x     = %d \n", x);     // 5
    printf("*ptr  = %d \n", *ptr);  // 5
    printf("add of x = %p \n", &x); //  &x and ptr will be same here

    (*ptr)++;
    printf("x     = %d \n", x);     // 6
    printf("*ptr  = %d \n", *ptr);  // 6
    printf("add of x = %p \n", &x); // &x and ptr will be same here

    *(ptr++);                                // ptr containing address of x will be changed and increase it by 4byte
    printf("x     = %d \n", x);              // 6
    printf("*ptr  = %d \n", *ptr);           // random value.. bcoz ptr now contains new value
    printf("add of x = %p \n", &x);          // same as earlier
    printf("pointer variable = %p \n", ptr); // add of x  + 4byte
}