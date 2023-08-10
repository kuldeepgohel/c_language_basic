#include<stdio.h>
void main(){
    int i;
    printf("enter your number:");
    scanf("%d",&i);
    if(i%2==0){
        printf("your number is even");   
    }
    else{
        printf("your number is odd");
    }
}