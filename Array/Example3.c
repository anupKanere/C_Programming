#include <stdio.h>

void printArray(int arr[], int size);

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    return 0;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
}
/*
There are no any inbuild predefined functions for array so size of the array is also sent from the function call
*/