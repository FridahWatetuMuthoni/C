#include <stdio.h>

/*
r=> Read
w=> Write
a=>Append
*/

int main()
{
    // FILE => data type, fpointer=>file pointer
    // FILE *fpointer = fopen("employees.txt", "w");
    FILE *fpointer = fopen("employees.txt", "a");
    fprintf(fpointer, "\nJim,Saleman\nRebbeca,Receptionist\nPam,Accounting\n");
    fclose(fpointer);

    char line[255];
    FILE *file_pointer = fopen("employees.txt", "r");
    fgets(line, 255, file_pointer);
    fgets(line, 255, file_pointer);
    printf("%s", line);
    fclose(file_pointer);

    return 0;
}