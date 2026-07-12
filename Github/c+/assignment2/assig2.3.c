//Write a program to find greatest of three numbers using nested if-else. 4. Ask the user to enter marks. Then show the result based on these rules: If marks are more than 75 ? show "Distinction" If marks are more than 65 ? show "First Class" If marks are more than 55 ? show "Second Class" If marks are 40 or more ? show "Pass Class" If marks are less than 40 ? show "Fail"
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("%d is Greatest", a);
        else
            printf("%d is Greatest", c);
    }
    else
    {
        if (b > c)
            printf("%d is Greatest", b);
        else
            printf("%d is Greatest", c);
    }

    return 0;
}