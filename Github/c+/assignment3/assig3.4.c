//Check the given number is prime or not.
#include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 6)
        printf("P");
    else
        printf("N P");

    return 0;
}