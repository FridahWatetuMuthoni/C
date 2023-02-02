#include <stdio.h>

void guessing_game(int guess)
{
    int secret_number = 5;
    int guess_limit = 5;
    int guess_count = 1;
    printf(" Guess Count: %d \n", guess_count);
    while (secret_number != guess && guess_limit >= guess_count)
    {
        printf("Enter a number: ");
        scanf("%d", &guess);
        guess_count++;
    }
    if (secret_number == guess)
    {
        printf("You Win!");
    }
    else
    {
        printf("You Failed!");
    }
}

int main()
{
    int index = 1;
    while (index <= 5)
    {
        printf("%d \n", index);
        index++;
    }

    int i = 0;
    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= 3);

    // The guessing game
    int guess;
    guessing_game(guess);

    return 0;
}