#include <stdio.h>
#include <string.h>
/*
PASSING STRUCTURE TO FUNCTION
*/
struct student
{
    int roll;
    char name[100];
    float cgpa;
};

void printStructure(struct student s1);
int main()
{
    struct student s1 = {1, "Anup", 8.99};
    printStructure(s1);
    return 0;
}

void printStructure(struct student s1)
{
    printf("Roll  = %d \n", s1.roll);
    printf("CGPA  = %f \n", s1.cgpa); 
    printf("Name  = %s \n", s1.name);
}