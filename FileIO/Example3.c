#include <stdio.h>
/*
Read the file using fgetc();
*/
int main()
{

    FILE *fptr = fopen("file.txt", "r");
    // fptr = fopen("file.txt" , "r");//this is also valid
    // printing each characters
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("\n");

    fclose(fptr);

    // prinitng whole line using loop
    fptr = fopen("file.txt", "r");
    char ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);

    return 0;
}