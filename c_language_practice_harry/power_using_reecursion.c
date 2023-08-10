#include<stdio.h>
int p(int a ,int n)
{
    if(n==1)
    {
     return a;
    }
    else
    {
     return a*p(a,n-1);
    }
}
int main()
{
 int result,b,c;
 printf("enter the value of base:");
 scanf("%d",&b);
 printf("enter the value of power:");
 scanf("%d",&c);
 result=p(b,c);
 printf("your answer is :%d",result);


return 0;
}