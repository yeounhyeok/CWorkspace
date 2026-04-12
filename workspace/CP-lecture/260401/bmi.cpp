#include<stdio.h>

int main(){
    double ans, h, w;
    printf("체중: ");
    scanf("%lf", &w);
    printf("신장: ");
    scanf("%lf", &h);
    
    ans = w / (h * h);
    
    printf("BMI: %lf\n");

    if(ans<18.5) printf("저체중");
    else if(ans>=18.5 && ans<23) printf("정상체중");
    else if(ans>=23 && ans<25) printf("과체중");
    else printf("비만");
    
    printf("입니다.\n");
    
    return 0;
}