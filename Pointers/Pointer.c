#include <stdio.h>

int main(){

    int age = 27;
    int *ptr = &age;
    int newAge = *ptr;

    printf("Pointer Variable    (ptr) : %p \n", ptr);
    printf("Address of age      (&age): %p \n", &age);
    printf("Adress of Pointer   (&ptr): %p \n", &ptr);
    printf("Value at ptr        (*ptr): %d \n ", *ptr);

}