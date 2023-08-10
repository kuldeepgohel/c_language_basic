#include<stdio.h>
void main()
{
    int a[]={2,3,4,5,1};

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++){
            if(a[j]<a[i])
            {
              int temp=a[j];
              a[j]=a[i];
              a[i]=temp;

            }
        }
        
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
        printf(" ");

    }




}