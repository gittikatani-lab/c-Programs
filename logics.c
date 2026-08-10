#include<stdio.h>
int main() {
    printf("%d\n",((4>3)&&(2<1)));
    printf("%d\n",((4>3)||(2<1)));
    printf("%d\n", !((4>3)||(2<1)));
    printf("%d\n", !((4>3)&&(1>2)));
    return 0;
}