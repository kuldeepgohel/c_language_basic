#include<stdio.h>

void main()
{
    int i,n,sum=0;
    printf("enter the number which you have to multiplication table\n");
    scanf("%d",&i);
    for(n=1;n<=10;n++)
    {
        printf("%d*%d=%d\n",i,n,i*n);
    }
    for(n=1;n<=10;n++){
        sum=sum+(i*n);
    }
    printf("%d",sum);
}