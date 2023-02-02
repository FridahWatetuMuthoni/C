#include <stdio.h>

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
    printf("The circumference od the circle is %f \n", circumfence);
    // Geting a charater variable from the user
    char name;
    printf("What is your name?");
    scanf("%s", &name);
    printf("Your name is %d \n", name);
    return 0;
}