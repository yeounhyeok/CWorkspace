#include<stdio.h>
#define PI 3.141592653589793

int main(){
    double x;
    printf("반지름을 입력하시오: ");
    scanf("%lf", &x);

    printf("구의 표면적: %lf\n", 4.0 * PI * (x * x));
    printf("구의 부피: %lf\n", 4.0/3.0 * PI * (x * x * x));
    return 0;   
}