#include <stdio.h>

int main(){
    int a, b;
    
    printf("삼각형의 내각 2개(빈칸으로 분리) :");
    scanf("%d %d", &a, &b);

    printf("세번째 각은 %d\n", 180-(a+b));

    return 0;
}