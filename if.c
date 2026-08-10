#include<stdio.h>
int main() {
    int marks;
    printf("enter marks:");
    scanf("%d", &marks);
    if(marks<30) {
    printf("fail\n");
    }
    else if(30<=marks && marks<80) {
    printf("pass\n");
    }else{
        printf("top");
    }
    return 0;
}
