//Write a program to check whether a number is even or odd.
#include <stdio.h>

int main()
{
    int num = 111;
    int first, last;

    first = num / 100;
    last = num % 10;

    if (first == last)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}