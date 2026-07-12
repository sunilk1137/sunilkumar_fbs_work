//Write a program to check whether a given year is a leap year.
#include <stdio.h>

int main()
{
    int year = 2024;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}