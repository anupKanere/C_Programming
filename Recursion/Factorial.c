#include<stdio.h>

int fact(int num);

int main(){
    int fac = fact(4);
    printf("%d" , fac);

}

int fact(int num){

    //base condition
    if(num == 0)
    return 1;

    int sum;
    sum = fact(num-1) * num;

    return sum;
}