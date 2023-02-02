#include <stdio.h>
#include <string.h>

int main()
{
    char author[] = "Fridah";
    int radius;
    printf("Enter the Radius: ");
    scanf("%i", &radius);
    // calculating the area of a circle
    double area = 3.146 * (radius * radius);
    printf("The area of the circle is %f \n ", area);
    // calculating the circumfeence of the circle
    double circumfence = 3.146 * 2 * radius;
    printf("The circumference of the circle is %f \n", circumfence);
    // Geting a string variable from the user
    char name[20];
    printf("What is your name?");
    scanf("%s", name);
    printf("Your name is %s \n", name);

    // CONSTANTS IN C
    const int NUM = 5;
    printf("%d \n", NUM);

    // BASIC CALCULATOR
    // calculates both floats and intergers
    double num1;
    double num2;
    printf("Enter the first number:");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    double total = num1 + num2;
    printf("The answer is %f \n", total);

    // Getting full strings from the user
    char firstname[20];
    char secondname[20];
    printf("Enter your full name: \n");
    scanf("%s %s", firstname, secondname);
    strcat(firstname, secondname);
    printf("Your fullname is %s \n", firstname);

    return 0;
}