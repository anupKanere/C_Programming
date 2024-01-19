#include <stdio.h>

void fabo(int num);

int main()
{

    printf("Enter the number upto which you want to print Fabonacci series : ");
    int num;
    scanf("%d", &num);
    fabo(num);
}

void fabo(int num)
{

    int a = 0, b = 1, next;

    while (a <= num)
    {
        printf("%d \n", a);
        next = a + b;
        a = b;
        b = next;
    }
}

