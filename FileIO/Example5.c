#include <stdio.h>
/*
Ques : Read 2 number from a file and overrite that file using sum of those 2 numbers
*/

int main(){

    FILE *fptr = fopen("Ques.txt" , "r");
    int a , b;

    fscanf(fptr , "%d" , &a);
    fscanf(fptr , "%d" , &b);

    fclose(fptr);

    fptr = fopen("Ques.txt" , "w");
    fprintf( fptr , "%d" , a+b);

    fclose(fptr);

    return 0;
}