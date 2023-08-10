#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,*ptr;
  printf("enter the number of elements wants to allocat in memory:");
  scanf("%d",&n);
  ptr=malloc(n*(sizeof(int)));
  if(ptr!=NULL)
  {
    for(int i=0;i<n;i++)
    {   printf("enter the elements:");
        scanf("%d",ptr+i);
        printf("your elements is:%d\n",*(ptr+i));

    }
  }
  
  



return 0;
}