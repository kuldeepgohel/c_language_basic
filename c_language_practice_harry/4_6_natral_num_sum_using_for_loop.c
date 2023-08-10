#include<stdio.h>

void main()
{
    int i,n,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
        printf("%d\t",sum);
    
}