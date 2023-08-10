#include<stdio.h>
#include<string.h>
struct subject
{
    int sub_id;
    int sub_code;
    char sub_name[10];
    char sub_type[20]; 
};

int main()
{
    struct subject sub;
    struct subject *ptr;
    ptr=&sub;

    strcpy(sub.sub_name,"maths");
    sub.sub_code=312209;
    sub.sub_id=1012;
    strcpy(sub.sub_type,"m.c.q");

    printf("subject name:%s\n",(*ptr).sub_name);
    printf("subject code:%d\n",(*ptr).sub_code);
    printf("subject id:%d\n",(*ptr).sub_id);
    printf("subject type:%s\n",(*ptr).sub_type);

    



return 0;
}