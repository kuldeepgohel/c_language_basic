#include<stdio.h>
void main() 
{ 
    float cel,fer;
    printf("enter temprature in celsiuse:");
    scanf("%f",&cel);
    fer = cel*(9/5)+32;
    printf("\nyour temprature is in feranhit is :%.2f",fer);

}