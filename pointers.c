#include <stdio.h>

/*
For people still confused on Pointers, I thought of a little analogy:
Say your friend wants to know where you live.
Think of your hometown as memory, with lots of houses being stored (variables),
and addresses to locate them (pointers).
You wouldn't show your friend, say, a picture of your house and expect them to find it quickly.
Therefore, you would give your friend your house's address (a pointer), so they can locate it easily.
Now, let's put it to proper terms.
C wants to know what the variable you're referring to is.
You have memory, with lots of variables being stored, and addresses to locate them.
You can't give C your variable name and expect C to find it amongst all of your other variables,
so you refer to its address is a pointer so C can easily locate it.
*/
// Accessing String via a Pointer

void getting_pointers()
{
    char string[11] = "HelloWorld";

    // Pointer Variable
    char *string_pointer = string;

    // creating a while loop till we dont find a null charater in the string
    while (*string_pointer != '\0')
    {
        // The current charater is not zero so we print it
        printf("%c", *string_pointer);

        // move to the next charater
        string_pointer++;
    }
}

int main()
{
    // pointers are memory addresses.
    // Memory address is the pysical address inside of the memory in our computer
    // pointers is a type of data type
    // & before something gives back the memory address
    int age = 30;
    int *pAge = &age;
    char string[] = "Fridah";
    char *pString = string;

    printf("Age's memory address: %p\n", &age);
    printf("String's memory address: %p\n", &string);

    // deferencing pointers is using a pointer to get the value stored there
    int number = 5000;
    int *pNumber = &number;
    printf("%d \n", *pNumber);

    getting_pointers();
    return 0;
}