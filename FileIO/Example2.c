#include<stdio.h>
/*
Writing data into file using fprintf()
*/

int main(){

    FILE *fptr;
    fptr = fopen("file.txt" , "w");

    if(fptr == NULL){
        printf("File not exists!!!");   
        return 1;
    }

    fprintf(fptr , "Hello, i m writing through program");
    fclose(fptr);

    return 0;
}