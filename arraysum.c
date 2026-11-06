#include<stdio.h>
int main(){
    int a[7],i,sum=0;
    for(i=0;i<7;i++){
        scanf(" %d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    return 0;
}
