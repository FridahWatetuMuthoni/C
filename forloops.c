#include <stdio.h>

int main()
{
    int lucky_numbers[] = {4, 8, 9, 7, 42, 50};
    size_t size = sizeof(lucky_numbers);
    size_t first_size = sizeof(lucky_numbers[0]);
    int array_length = size / first_size;
    // printf("%d \n", array_length);

    int i;
    for (i = 0; i <= array_length; i++)
    {
        printf("%d \n", lucky_numbers[i]);
    }

    return 0;
}