#include <stdio.h>

//Function Declaration/Prototype
void printHello();
void printGoodBye();

int main()
{
    printHello();   // Function call
    printGoodBye(); // Function call
    return 0;
}

//Function Definition
void printHello(){
    printf("Hello....Welcome to C language \n");
}

//Function Definition
void printGoodBye(){
    printf("Good bye...See you soon...\n");
}