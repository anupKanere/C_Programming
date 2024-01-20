#include <stdio.h>
#include <string.h>

int main()
{

    char *canChange = "Hello World"; // can be reinitialized
    puts(canChange);
    canChange = "Hello";
    puts(canChange);
    printf("---------");

    char cannotChange[] = "Hello World"; // cannot be reinitialized
    // cannotChange = "Hello";// not possible


    return 0;
}
