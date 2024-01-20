#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[100];
    float cgpa;
};

int main()
{

    // Array of Structure
    struct student me[100];
    struct student cse[100];
    struct student it[100];

    me[0].roll = 1;
    me[0].cgpa = 7.99;
    strcpy(me[0].name, "Anup");

    printf("**** Showing Mechanical Engineering (ME) Students **** \n");
    printf("-----Student 01----- \n");
    printf("Roll  = %d \n", me[0].roll);
    printf("CGPA  = %f \n", me[0].cgpa);
    printf("Name  = %s \n", me[0].name);

    cse[0].cgpa = 8.99;
    cse[0].roll = 10;
    strcpy(cse[0].name, "Akshay");
   

    printf("**** Showing Computer Science Engineering (CSE) Students **** \n");
    printf("-----Student 01----- \n");
    printf("Roll  = %d \n", cse[0].roll);
    printf("CGPA  = %f \n", cse[0].cgpa);
    printf("Name  = %s \n", cse[0].name);

    return 0;
}