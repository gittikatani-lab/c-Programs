# include<stdio.h>
int main() {
    int length,breadth,perimeter;
    printf("enter length=");
    scanf("%d", &length);

    printf("enter breadth=");
    scanf("=%d" , &breadth);

 perimeter=2*(length+breadth);

    printf("perimeter=%d", perimeter);
    return 0;
}