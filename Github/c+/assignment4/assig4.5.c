//Write a menu driven program to take a number for user and perform operations as follows.
//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
#include<stdio.h>

int main()
{
    int num,choice,temp,rev=0,rem,sum=0,count=0,i;

    printf("Enter Number: ");
    scanf("%d",&num);

    printf("\n1.Even/Odd");
    printf("\n2.Prime");
    printf("\n3.Palindrome");
    printf("\n4.Positive/Negative/Zero");
    printf("\n5.Reverse");
    printf("\n6.Sum of Digits");

    printf("\nEnter Choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:

            if(num%2==0)
                printf("Even");
            else
                printf("Odd");
            break;

        case 2:

            count=0;
            for(i=1;i<=num;i++)
            {
                if(num%i==0)
                    count++;
            }

            if(count==2)
                printf("Prime");
            else
                printf("Not Prime");
            break;

        case 3:

            temp=num;
            rev=0;

            while(temp>0)
            {
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }

            if(rev==num)
                printf("Palindrome");
            else
                printf("Not Palindrome");
            break;

        case 4:

            if(num>0)
                printf("Positive");
            else if(num<0)
                printf("Negative");
            else
                printf("Zero");
            break;

        case 5:

            temp=num;
            rev=0;

            while(temp>0)
            {
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }

            printf("Reverse = %d",rev);
            break;

        case 6:

            temp=num;
            sum=0;

            while(temp>0)
            {
                rem=temp%10;
                sum=sum+rem;
                temp=temp/10;
            }

            printf("Sum = %d",sum);
            break;

        default:

            printf("Invalid Choice");
    }

    return 0;
}