#include<stdio.h>
 int main() {
    int a[2][2],i,j;
    printf("enter 4 elemnts");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("transpose of matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            printf("%d",a[j][i]);   }
    }
 return 0;
 }
