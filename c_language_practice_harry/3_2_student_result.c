#include<stdio.h>
void main()
{
    int mark,i;
    printf("1.maths\n2.english\n3.science\n");
    for(i=1;i<=3;i++)
    {
        printf("enter your %d subject mark:",i);
        scanf("%d",&mark);
     if(mark>33)
    {
      printf("your are pass in %d subject\n",i);
    }
    else
    {
    printf("oops!!!! you are failed..(\n");
    }
   
        
    }
   
    
}