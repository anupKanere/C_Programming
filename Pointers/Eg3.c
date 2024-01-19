#include <stdio.h>

/*write a program to print sum , product and avg of 2 numbers ,
print sum, product and avg in main function
*/

void doWork(int a, int b, int *sum, int *prod, float *avg);

int main()
{
    int a = 5, b = 10;
    int sum, prod;
    float avg;
    doWork(a, b, &sum, &prod, &avg);
    printf("sum = %d prod = %d avg = %f \n ", sum, prod, avg);

    return 0;
}

void doWork(int a, int b, int *sum, int *prod, float *avg)
{
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2.0;
}