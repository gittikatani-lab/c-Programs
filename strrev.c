#include<stdio.h>
void main(){
    int i,l;
    char str[20],c;
    printf("enter the string");
    gets(str);
    l=strlen(str);
    for(i=0;i<l/2;i++){
        c=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=c;

    }
    printf("reverse string is %s",str);
    


}
