#include <stdio.h>

int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("Age: %p \n", &age);
    printf("GPA: %p \n", &gpa);
    printf("Grade: %p \n", &grade);

    return 0;
}