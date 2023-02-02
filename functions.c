#include <stdio.h>
#include <string.h>
#include <time.h>

// THIS FUNCTION DOES NOT RETURN ANY VALUE
void greeting(char name[], int age)
{
    printf("Hello %s  your are %d years old \n", name, age);
}

int time_greeting(int current_time)
{
    printf("%d \n", current_time);
    if (current_time > 0 && current_time <= 3)
    {
        printf("Goodnight");
    }
    else if (current_time > 3 && current_time < 12)
    {
        printf("Good Morning \n");
    }
    else if (current_time >= 12 && current_time < 15)
    {
        printf("Good Afternoon \n");
    }
    else if (current_time > 15 && current_time < 20)
    {
        printf("Good Evenning \n");
    }
    else if (current_time > 20 && current_time <= 24)
    {
        printf("Good Night \n");
    }
    else
    {
        printf("The time you entered is unknown \n");
    }
}
/* Create a function that takes an  arguement and determines what today according to the weather
 */
char what_to_do(char *weather)
{
    char *statement;
    printf("%s \n", weather);
    if ((strcmp(weather, "cold")) == 0)
    {
        statement = "please wear a sweeater";
    }
    else if ((strcmp(weather, "hot")) == 0)
    {
        statement = "Please remember to drink your water";
    }
    else
    {
        statement = "Have an awesome day";
    }
    printf("%s", statement);
}

// THIS FUNCTION RETURNS AN FLOATING POINT NUMBER
double cube(double number)
{
    double cubed_number = number * number * number;
    return cubed_number;
}

// THE MAIN FUNCTION
int main()
{
    greeting("Mike", 60);
    double value_of_cube = cube(20);
    printf("Answer: %f \n", value_of_cube);

    // C Program to Print Good Morning, Evening, and Night According to Time
    // 24 hour system
    int current_time;
    printf("Please enter the time(1-24):");
    scanf("%d", &current_time);
    time_greeting(current_time);

    /*Choose the type of weather*/
    char *weather_statement;
    printf("Is the weather cold , hot or normal : ");
    scanf("%s", weather_statement);
    printf("%s \n", what_to_do(weather_statement));

    return 0;
}
