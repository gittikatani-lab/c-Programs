#include<stdio.h>
int main() {
    int age;
    printf("enter age");
    scanf("%d", &age);
    printf("age is: %d ", age);
    if(age>=18) {
    printf("voting right");
    }
    else {
    printf("no voting right");
    }
    return 0;
}