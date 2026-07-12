//Accept three sides of a triangle from the user and determine whether the triangle is equilateral, isosceles, or scalene.
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b)
    {
        if (b == c)
            printf("Equilateral Triangle");
        else
            printf("Isosceles Triangle");
    }
    else
    {
        if (a == c || b == c)
            printf("Isosceles Triangle");
        else
            printf("Scalene Triangle");
    }

    return 0;
}