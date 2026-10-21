#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
    int rollno;
    char name[20];
    float marks;

};
void main(){
    struct student a;
    printf("enter rollno,name,marks of a");
    scanf("%d %s %f",&a.rollno,&a.name,&a.marks);
    printf("record of a\n");
    printf("rollno is %d\n",a.rollno);
    printf("marks is %f\n",a.marks);
    printf("name is %s\n",a.name);

return 0;
}
