#include<stdio.h>
void main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year%4==0){
        printf("It is a leap year!!..");
    }
    else{
        printf("sorry!! it's not a leap year");   
    }
}