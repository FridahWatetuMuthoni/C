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
    if (weather == 'cold')
    {
        statement = "please wear a sweeater";
    }
    else if (weather == 'hot')
    {
        statement = "Please remember to drink your water";