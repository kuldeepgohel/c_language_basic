#include<stdio.h>
void main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%25==0)
    {
        printf("your number is divisible by 25...");
    }
    else
    {
        printf("sorry!! your number is not divisible by 25...");

    }
}