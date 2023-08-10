#include<stdio.h>
// basic programing using structure//
struct student //structure declaration//
{
   char surname[20];
   char name[20];
   char father_name[20];
   int roll_no;
   
};

void main()
{
  struct student s1,s2;
  struct student s3={"patel","shubham","rameshbhai",21};   //stuructur calling//
  
  
  printf("enter the sur-name of student:\n");
  scanf("%s",s1.surname);
  printf("enter the name of student:\n");
  scanf("%s",s1.name);
  printf("enter the father-name of student:\n");
  scanf("%s",s1.father_name);
 
  printf("enter the sur-name of student:\n");
  scanf("%s",s2.surname);
  printf("enter the name of student:\n");
  scanf("%s",s2.name);
  printf("enter the father-name of student:\n");
  scanf("%s",s2.father_name);

  printf("1st student full name is: %s %s %s \n",s1.surname,s1.name,s1.father_name);
  printf("2st student full name is: %s %s %s \n",s2.surname,s2.name,s2.father_name);
  printf("3st student full name is: %s %s %s \n",s3.surname,s3.name,s3.father_name);
  




}