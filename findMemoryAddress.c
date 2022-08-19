#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int age = 90;
    int * pAge = &age;

    double gpa = 3.4;
    double * pGPA = &gpa;

    char grade = 'A';
    char * aGrade = &grade;

    printf("Memory address of age is %p\nMemory address of gpa is %p\nMemory address of grade is %p\n", &age, &gpa, &grade);
    printf("De-reference the pAge pointer variable: %d", *pAge);

    return 0;
}