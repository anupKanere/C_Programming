#include <stdio.h>
/*
Reading characters from file using fscanf()
*/

int main()
{

    FILE *fptr;
    fptr = fopen("file.txt", "r");
    char ch;

    if (fptr == NULL)
        printf("File does not exists ");
    else
    {
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
    }
    fclose(fptr);

    return 0;
}