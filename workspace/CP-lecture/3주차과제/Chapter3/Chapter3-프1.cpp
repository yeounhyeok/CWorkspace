#include<stdio.h>
int main(){
    double x;
    printf("실수를 입력하시오: ");
    scanf("%lf", &x);
    printf("지수 형식으로는 %le입니다.", x);
    return 0;   
}