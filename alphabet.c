#include<stdio.h>
int main () {
    char alphabet,a,e,i,o,u;
    printf("enter a alphabet");
    scanf("%c",&alphabet);
    if(alphabet == 'a' ||alphabet == 'e' ||alphabet == 'i'||alphabet == 'o'||alphabet == 'u') {
printf("alphabet is vowel");

    }
    else {
        printf("alphabet is consonent");

}
return 0;
}
