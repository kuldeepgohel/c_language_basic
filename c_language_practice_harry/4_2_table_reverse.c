#include<stdio.h>

void main()
{
    int i,n;
    printf("enter the number which you have to multiplication table\n");
    scanf("%d",&i);
    for(n=10;n>=1;n--)
    {
        printf("%d*%d=%d\n",i,n,i*n);
    }
}