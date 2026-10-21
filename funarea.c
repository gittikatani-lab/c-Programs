#include<stdio.h>
#include<conio.h>
void area(int r);
void main(){
    area(10);
}
void area(int r){
    printf("area of circle is %f",3.14*r*r);
    return 3.14*r*r;
}
