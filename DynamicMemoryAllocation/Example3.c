#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("Enter 5 Numbers  \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8 * sizeof(int));
    printf("Enter 8 Numbers  \n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf(" number is %d \n", ptr[i]);
    }

    return 0;
}