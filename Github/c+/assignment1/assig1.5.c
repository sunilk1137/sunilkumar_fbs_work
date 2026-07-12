//Write a program to check whether a person is eligible to vote (age = 18).
#include <stdio.h>

int main()
{
    int age = 20;

    if (age >= 18)
        printf("Eligible to Vote");
    else
        printf("Not Eligible");

    return 0;
}