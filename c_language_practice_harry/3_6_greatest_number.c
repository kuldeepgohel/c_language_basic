#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("\nenter the value of b:");
    scanf("%d",&b);
    printf("\nenter the value of c:");
    scanf("%d",&c);  
    printf("\nenter the value of d:");
    scanf("%d",&d);
    if(a>b){
        if(a>c){
            if(a>d){
                printf("a is greater..");
            }
            else{
                printf("d is greater..");
            }
        }
            else{
                if(c>d){
                    printf("c is greater...");
                }
                else{
                    printf("d is greater..");
                }
            }
        }
        else{
            if(b>c){
                if(b>d){
                    printf("b is greater..");
                }
                else{
                    printf("d is greater...");
                }
            }
            else{
                if(c>d){
                    printf("c is greater..");
                }
                else{
                    printf("d is greater...");
                }
            }
        }
    }
  
    
    
