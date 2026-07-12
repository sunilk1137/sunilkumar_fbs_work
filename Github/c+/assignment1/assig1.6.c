// Write a program to check whether a given character is uppercase or lowercase.
#include <stdio.h>

int main()
{
    char ch = 'h';

    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase");
    else
        printf("Not an Alphabet");

    return 0;
}