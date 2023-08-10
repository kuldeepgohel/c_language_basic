#include<stdio.h>

void main()
{
    int i=1,n,fact=1;
      printf("enter the number to find a factorial:");
      scanf("%d",&n);
      while(i<=n)
      {
        fact=fact*i;
        i++;
         printf("%d\t",fact);
      }
      

}