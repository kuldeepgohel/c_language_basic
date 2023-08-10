#include<stdio.h>

void main()
{
    int n,i=0,sum=0;
    printf("enter the value of a:");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("your answer is %d",sum);
}