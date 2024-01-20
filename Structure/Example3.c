#include <stdio.h>
#include <string.h>
/*
POINTER TO STRUCTURE
*/
struct student
{
    int roll;
    char name[100];
    float cgpa;
};

int main()
{

    struct student s1 = {1, "Anup", 7.99};
    struct student *ptr = &s1;
    printf("Roll  = %d \n", (*ptr).roll);
    printf("CGPA  = %f \n", ptr->cgpa); // (*ptr).cgpa can also be replaced with ptr->cgpa
    printf("Name  = %s \n", (*ptr).name);

    return 0;
}