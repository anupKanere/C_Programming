#include <stdio.h>

int main()
{
    int start, last;

    printf("Enter the number to get prime numbers between range \n");

    printf("Enter start Number : ");
    scanf("%d", &start);

    printf("Enter last Number : ");
    scanf("%d", &last);

    for (int i = start; i <= last; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            printf("%d \n", i);   
    }
}