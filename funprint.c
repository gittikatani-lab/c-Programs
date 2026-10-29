#include<stdio.h>
#include<string.h>
void fun(int,int);
void main(){
    int x=12,y=3;
    fun(x,y);
    printf("\n%d %d",x,y);
}
void fun(int x,int y){
    x=3,y=12;
    printf("\nx=%d y=%d",x,y);

}

