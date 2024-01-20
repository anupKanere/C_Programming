#include <stdio.h>

/*
STRING :
    - A character array terminated by a '\0'(null character).
    - null character denotes string termination.
    - scanf() cannot input multi-word string with spaces ...here gets() and puts() come into picture
    - 
*/

void printString(char arr[]);
int main()
{
    // Initializing String
    char name[] = {'A', 'N', 'U', 'P', '\0'};
    char firstName[] = "ANUP KANERE";
    printString(firstName);
    printf("%s" , name);// we can also print the string by using %s format specifier

    return 0;
}

void printString(char arr[])
{

    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}