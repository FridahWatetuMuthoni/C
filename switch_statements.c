#include <stdio.h>

int main()
{
    char grade = 'F';
    switch (grade)
    {
    case 'A':
        printf("You did great in the test");
        break;
    case 'B':
        printf("You did alright in the test");
        break;
    case 'C':
        printf("You did poorly in the test");
        break;
    case 'D':
        printf("You did very bad in the test");
        break;
    case 'F':
        printf("You failed in the test");
        break;
    default:
        printf("Exams Results");
    }

    return 0;
}