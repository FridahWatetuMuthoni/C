#include <stdio.h>

int max_number(int num1, int num2, int num3)
{
    int greatest_number;

    if (num1 >= num2 && num1 >= num3)
    {
        printf("number one");
        greatest_number = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        greatest_number = num2;
        printf("number two");
    }
    else
    {
        greatest_number = num2;
        printf("number three");
    }
    return greatest_number;
}

int main()
{
    printf("%d \n", max_number(10, 80, 200));
    return 0;
}