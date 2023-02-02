#include <stdio.h>

int calculator();

int main()
{
    printf("Your calculation answer is : %d \n", calculator());
    return 0;
}

int calculator()
{
    double num1;
    double num2;
    char operator;
    double total;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the operation (*,+,/,-): ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    if (num1 && num2)
    {
        if (operator== '+')
        {
            total = num1 + num2;
        }
        else if (operator== '-')
        {
            total = num1 - num2;
        }
        else if (operator== '*')
        {
            total = num1 * num2;
        }
        else if (operator== '/')
        {
            total = num1 / num2;
        }
        else
        {
            printf("invalid operator");
        }
    }
    else
    {
        printf("You did not enter both numbers");
    }

    return total;
}