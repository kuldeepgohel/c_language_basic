#include<stdio.h>
//string program//
int main()
{
    //diffrent type to declaire string//
char name[]="kuldeep";// 1 using array //
char name1[6]={'g','o','h','e','l'}; // 2 using array //
char *p="hareshbhai";//using pointer//
char name3[10];
char *city="junagadh";
printf("%s\n",name);

printf("%s\n",p);
// print string with diffrent type//
 printf("%s\n",name1);
//  print string with another method //
 printf(city);
 printf("\n");
//  enter &k print string using gets and puts //
gets(name3);
puts(name3);
// 2-D string using pointer and array//
// first using pointer //
char *pa[3]={"rumit","jayeshbhai","vadher"};
printf("%s\t",*pa);
printf("%s\t",pa[1]); 
printf("%s\t",*(pa+2)); 
 


return 0;
}