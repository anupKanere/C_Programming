/*
STRUCTURE :
    - Structure is a collection of values of different data types.
*/
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

    struct student s1;

    s1.roll = 1;
    s1.cgpa = 7.99;
    // s1.name = "Anup"; // not allowed bcoz Strings created by char[] cannot be reinitialized
    //   so we need to use inbuilt string functions or if we take char * in struct
    //  then we can reinitialize the string
    strcpy(s1.name, "Anup");

    printf("Student -1 name    : %s \n", s1.name);
    printf("Student -1 roll no : %d \n", s1.roll);
    printf("Student -1 CGPA    : %f \n", s1.cgpa);

    struct student s2 = {2, "Alice", 8.65}; // we can initialize structure variables at the time of declaration also.
    printf("Student - 2 name    : %s \n", s2.name);
    printf("Student - 2 roll no : %d \n", s2.roll);
    printf("Student - 2 CGPA    : %f \n", s2.cgpa);

    return 0;
}
