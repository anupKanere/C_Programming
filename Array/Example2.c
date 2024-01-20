#include <stdio.h>

int main(){

    int arr[5];
    int *ptr = &arr[0];// &arr[0] can also be replaced with int *ptr = arr;

    //input
    for(int i = 0; i < 5; i++){
        printf("%d index : ", i);
        scanf("%d", (ptr+i));// we can replace (ptr+i) with &arr[i];
    }

    //output
    for(int i = 0; i < 5; i++){
        if(i == 0)
        printf("Array Elements are : \n");
        printf("%d index = %d \n ", i , *(ptr+i));// we can replace *(ptr+i) with arr[i];
    }
    return 0;
}