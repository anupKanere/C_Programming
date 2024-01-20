#include <stdio.h>
#include <string.h>

/*
Ques. Find the salted form of a password 
entered by user if the salt is "123" and
add it to the end.
*/

void salting(char *str);
int main(){

    char str[100];
    printf("Enter Password : \n");
    scanf("%s" , str);
    salting(str);
    return 0;
}


void salting(char *str){

    char salt[] = "123";
    char newPass[200];

    strcpy(newPass , str);
    strcat(newPass , salt);

    puts(newPass);
}