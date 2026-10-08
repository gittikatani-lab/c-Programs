#include<stdio.h>
int main() {
    int a[50],n,i,sum=0;
    printf("enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter numbers ");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum is %d",sum);
    return 0;
    
}
