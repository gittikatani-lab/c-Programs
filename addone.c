#include<stdio.h>
#include<conio.h>
int main(){
int number,a,b,c,d,e,result;
printf("enter 5 digit number");
scanf("%d",&number);
a=number/10000;
b=(number/1000)%10;
c=(number/100)%10;
d=(number/10)%10;
e=number%10;
a=(a+1)%10;
b=(b+1)%10;
c=(c+1)%10;
d=(d+1)%10;
e=(e+1)%10;
result=a*10000+ b*1000+ c*100 +d*10+e;
printf("new number is %d",result);
return 0;
}

