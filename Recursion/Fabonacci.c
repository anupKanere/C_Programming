#include <stdio.h>

int fab(int num);

int main(){

    printf("%d " , fab(7));


}

int fab(int num){

    if(num == 0)
    return 0;
    if(num == 1)
    return 1;

    int fabo = fab(num - 1) + fab(num - 2);

    return fabo;
}