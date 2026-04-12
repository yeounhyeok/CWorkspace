#include <stdio.h>

int main(){
    int a, b, c;

    printf("정수를 입력하시오: ");
    scanf("%d", &a);
    printf("정수를 입력하시오: ");
    scanf("%d", &b);
    printf("정수를 입력하시오: ");
    scanf("%d", &c);

    printf("평균은 %lf입니다.\n", (a+b+c)/3.);

    return 0;
}