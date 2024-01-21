#include <stdio.h>
/*
Writing and appending data into file using fputc()
*/

int main()
{

    FILE *fptr = fopen("NewFile1.txt", "w");

    fputc('a', fptr);
    fputc('n', fptr);
    fputc('u', fptr);
    fputc('p', fptr);
    fputc('\n', fptr);
    fclose(fptr);

    //appending data to file.. open file in append mode
    fptr = fopen("NewFile1.txt", "a");
    fputc('k', fptr);
    fputc('a', fptr);
    fputc('n', fptr);
    fputc('e', fptr);
    fputc('r', fptr);
    fputc('e', fptr);

    fclose(fptr);

    return 0;
}