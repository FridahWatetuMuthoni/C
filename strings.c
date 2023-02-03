#include <stdio.h>
#include <string.h>

void displayString(char str[]);
void strings_pointers();

int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string

    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);             
    displayString(str);     // Passing string to a function.
    strings_pointers();

    return 0;
}

void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
}

void strings_pointers(){
      char name[] = "Harry Potter";

  printf("%c", *name);     // Output: H
  printf("%c", *(name+1));   // Output: a
  printf("%c", *(name+7));   // Output: o

  char *namePtr;

  namePtr = name;
  printf("%c", *namePtr);     // Output: H
  printf("%c", *(namePtr+1));   // Output: a
  printf("%c", *(namePtr+7));   // Output: o

}

/*
String is a data type that stores the sequence of characters in an array.
 A string in C always ends with a null character (\0),
 which indicates the termination of the string.
 Pointer to string in C can be used to point to the starting address of the array,
 the first character in the array.
 These pointers can be dereferenced using the asterisk * operator to identify the character stored at the location.
 2D arrays and pointer variables both can be used to store multiple strings.
 A string always terminates with a null character (\0),
 which indicates the termination of a string.
 As a string is a group of characters similarly,
 we can also store a sentence in C as a group of strings, as shown in the figure mentioned below.
Individual characters in C are enclosed within a single quote for example, 'a', 'b', 'c'. As explained in the previous section, a string is a collection of characters.
To store a string in C, we can create an array and store them in these arrays.

*/