#include <stdio.h>

int main(){
    int a, b, c;
    printf("첫번째 정수: ");
    scanf("%d", &a);
    printf("두번째 정수: ");
    scanf("%d", &b);
    printf("약수 값: ");
    scanf("%d", &c);

    printf("%d는 %d와 %d의 공통 약수", c, a, b);
    printf("%s", (a%c || b%c) ? "가 아닙니다.\n" : "입니다.\n");

    return 0;
}