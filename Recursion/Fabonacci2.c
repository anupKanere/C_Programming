#include <stdio.h>

int fabo(int num);

int main()
{

    printf("How many terms in Fabonacci series do you want to print ? ");
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d \n", fabo(i));
    }

    return 0;
}

int fabo(int num)
{
    if (num <= 1)
        return num;
    else
        return fabo(num - 1) + fabo(num - 2);
}