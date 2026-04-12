#include<stdio.h>
#include<math.h>

int main(){
    int period;
    double init, ratio, result;
    printf("초기저금액: ");
    scanf("%lf", &init);
    printf("이율: ");
    scanf("%lf", &ratio);
    printf("저축기간: ");
    scanf("%d", &period);

    result = init * pow((1. + ratio), period);
    printf("%d년 후의 원리금=%lf", period, result);
    return 0;
}