// Write a program to print Namaste if user is Indian or print hello if user is American

#include <stdio.h>

void indian();
void american();

int main()
{

    printf("Enter I for Indian and A for American \n");
    char ch;
    scanf("%c", &ch);

    if (ch == 'I')
    {
        indian();
    }
    else if (ch == 'A')
    {
        american();
    }
    else
    {
        printf("Wrong Input. Please Enter valid input");
    }
    return 0;
}

void indian()
{
    printf("Namaste");
}

void american()
{
    printf("Hello");
}