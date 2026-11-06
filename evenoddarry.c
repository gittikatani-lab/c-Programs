#include<stdio.h>
int main(){
    int a[5],i,even=0,odd=0;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("even numbers are%d",even);
    printf("odd numbers are %d",odd);
    return 0;
    
}
