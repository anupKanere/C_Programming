#include <stdio.h>
/*
- In C Arrays are pointers
Q.Write a program to take 3 prices from user and
add 18% gst for each price and print those prices
*/
int main()
{

    // float prices[3];// valid syntax
    // float prices[3] = {100, 200, 300}; // valid Syntax
    float prices[] = {100, 200, 300}; // valid syntax

    // printf("Enter 3 Prices : \n");
    // scanf("%f" , &prices[0]);
    // scanf("%f" , &prices[1]);
    // scanf("%f" , &prices[2]);

    printf(" Prices 1 with GST : %f \n ", prices[0] += 0.18 * prices[0]);
    printf("Prices 2 with GST : %f \n ", prices[1] += 0.18 * prices[1]);
    printf("Prices 3 with GST : %f \n ", prices[2] += 0.18 * prices[2]);

    return 0;
}
