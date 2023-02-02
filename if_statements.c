#include <stdio.h>

int max_number(int num1, int num2, int num3)
{
    int greatest_number;
    printf("%d %d %d \n", num1, num2, num3);

    if (num1 >= num2 && num1 >= num3)
    {
        greatest_number = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        greatest_number = num2;
    }
    else if (num3 >= num1 && num3 >= num2)
    {
        greatest_number = num3;
    }
    return greatest_number;
}

int main()
{
    if (3 < 2 || 2 > 5)
    {
        printf("One or both of them is true \n");
    }
    else
    {
        printf("None of them is true \n");
    }
    printf("%d \n", max_number(1000, 802, 200));
    return 0;
}