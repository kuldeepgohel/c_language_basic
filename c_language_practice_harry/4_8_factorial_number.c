#include<stdio.h>

void main()
{     int n,i,fact=1;
      printf("enter the number to find a factorial:");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
        fact=fact*i;
      }
     printf("your answer is :%d",fact);
}