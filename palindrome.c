#include<stdio.h>
#include<conio.h>
int main(){
  int n,original,rev=0,remainder;
  printf("enter number");
  scanf("%d",&n);
  original=n;
  while(n !=0){
    remainder=n%10;
    rev=rev*10+remainder;
    n=n/10;

  }
  if(original==rev){
    printf("palindrome number");
  }
  else{
    printf("not a palindrome number");
  }
  return 0;
}
