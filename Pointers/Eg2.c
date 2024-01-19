#include <stdio.h>

void square(int num);
void _square(int *n);
int main()
{

    int num = 5;
    square(num); // call-by-value
    printf("num after call by value %d \n", num);

    _square(&num); // call-by-reference;
    printf("num after call by reference %d \n", num);
}

void square(int num)
{

    num = num * num;
    printf("Square = %d \n", num);
}

void _square(int *n)
{

    *n = *n * *n;
    printf("Square = %d \n", *n);
}