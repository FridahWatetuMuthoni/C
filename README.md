# C-Programming-Basics

## windows C setup

1. Requirements
   Windows Setup: 1. search codeblocks c and click on the first link 2. Go to download 3. Click on download the binary release 4. Pick this one => codeblocks-16.01mingw-setup.exe 5. 16.01mingw-setup.exe comes with both a complier and an IDE
   6.Install the exe and leave everything as default

Mac OS Setup: 1. Go to the terminal 2. Type this to see if you already have a C complier already installed => cc -V 3. If you dont have a complier type this => xcode-select --install 4. Now you need to download an IDE called codeblocks 5. search codeblocks c and click on the first link 6. Go to download 7. Click on download the binary release 8. Click the Mac option 9. Click on the CodeBlocks-13.12-mac.zip => Sourecforge.net

## INCLUDING VARIABLES IN STRINGS

1. Strings
   printf("The circumference od the circle is %s ", circumfence);

2. Floats:
   printf("The circumference od the circle is %f ", circumfence);

3. Numbers:
   printf("The circumference od the circle is %i ", circumfence);

## Strings Notes

String is a data type that stores the sequence of characters in an array.
A string in C always ends with a null character (\0),
which indicates the termination of the string.
Pointer to string in C can be used to point to the starting address of the array,
the first character in the array.
These pointers can be dereferenced using the asterisk \* operator to identify the character stored at the location.
2D arrays and pointer variables both can be used to store multiple strings.
A string always terminates with a null character (\0),
which indicates the termination of a string.
As a string is a group of characters similarly,
we can also store a sentence in C as a group of strings, as shown in the figure mentioned below.
Individual characters in C are enclosed within a single quote for example, 'a', 'b', 'c'. As explained in the previous section, a string is a collection of characters.
To store a string in C, we can create an array and store them in these arrays.

## POINTERS

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
