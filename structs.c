#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student_one;
    student_one.age = 22;
    student_one.gpa = 3.2;
    strcpy(student_one.name, "Fridah");
    strcpy(student_one.major, "Computer Science");
    printf("%d \n", student_one.age);
    printf("%s \n", student_one.major);

    struct Student student_two;
    student_two.age = 29;
    student_two.gpa = 4.2;
    strcpy(student_two.name, "Mary");
    strcpy(student_two.major, "Business Studies");
    printf("%d \n", student_two.age);
    printf("%s \n", student_two.major);

    return 0;
}