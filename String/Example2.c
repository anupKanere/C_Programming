#include <stdio.h>

/*
STRING :
    - scanf() cannot input multi-word string with spaces ...here gets() and puts() come into picture.
    - gets() is outdated and dangerous so instead use fgets(str , size , fileName)
    - Strings are pointers in C because arrays are pointers and Strings are basically char array
    
*/
int main()
{
    char fullName[100];
    printf("Enter your full name : \n");
    // gets(fullName);
    fgets(fullName , 100 , stdin);
    puts(fullName);

    return 0;
}

