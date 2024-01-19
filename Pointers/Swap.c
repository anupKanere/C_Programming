#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{

    int a = 10, b = 20;

    printf("------------CALL BY VALUE-------------\n");
    printf("Before swap \n");
    printf("a = %d , b = %d \n ", a, b);
    swap(a, b);
    printf("after swap \n");
    printf("a = %d , b = %d \n", a, b);
    printf("----------------------------------------\n");

    printf("------------CALL BY REFERENCE-------------\n");
    printf("Before swap \n");
    printf("a = %d , b = %d \n ", a, b);
    _swap(&a, &b);
    printf("after swap \n");
    printf("a = %d , b = %d \n", a, b);
    printf("-----------------------------------------\n");

    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("inside swap a = %d b = %d \n" , a , b);
}
void _swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
     printf("inside swap a = %d b = %d \n" , *a , *b);
}