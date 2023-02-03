#include <stdio.h>

int main(){
    //If you have a variable var in your program, &var will give you its address in the memory.
    //pointers store addresses not values
    int var = 5;
    char string[] = "Hello World";
    printf("var: %d \n", var);
    printf("address of var: %p \n", &var);
    printf("%c \n", *string);

    int variable = 10;
    int *variable_pointer = &variable;
    printf(" Variable Pointer: %p\n", variable_pointer);
    printf(" Variable Pointer Value: %d\n", *variable_pointer);


    return 0;
}