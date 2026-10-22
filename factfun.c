#include<stdio.h>
#include<conio.h>
long int fact(int);
void main(){
    long int res;
    int n;
    printf("enter n");
    scanf("%d",&n);
    res=fact(n);
    printf("%d",res);
    getch();
}
long int fact(n){
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
