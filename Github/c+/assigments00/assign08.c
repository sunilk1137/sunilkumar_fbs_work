#include<stdio.h>

int main()
{
    int min=130,hour,rem;

    hour=min/60;
    rem=min%60;

    printf("%d\n",hour);
    printf("%d",rem);

    return 0;
}