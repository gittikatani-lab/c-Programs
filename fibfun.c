#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%ld",fib(i));
    }
    return 0;
}
long int fib(int n){
    if(n==1)
    return 0;
    else if (n==2)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}
