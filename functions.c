#include <stdio.h>

// THIS FUNCTION DOES NOT RETURN ANY VALUE
void greeting(char name[], int age)
{
    printf("Hello %s  your are %d years old \n", name, age);
}

/* Create a function that takes an time arguement and determine if its morning, noon ,afternoon
or night
*/
/* Create a function that takes an  arguement and determines what today according to the weather
 */
char what_to_do(char weather[])
{
    char *statement;
    if (weather == "cold")
    {
        statement = "please wear a sweeater";
    }
    else if (weather == "hot")
    {
        statement = "Please remember to drink your water";
    }
    else
    {
        statement = "Have an awesome day";
    }
    return statement;
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

    /*Choose the type of weather*/
    char weather_statement[100];
    printf("Is the weather cold , hot or normal : ");
    scanf("%s", weather_statement);
    // printf(what_to_do(weather_statement));
    return 0;
}
