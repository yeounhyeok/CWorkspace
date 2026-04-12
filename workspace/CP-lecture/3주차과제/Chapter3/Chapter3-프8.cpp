#include<stdio.h>

int main(){
    double dist, h, m, s;

    printf("거리를 미터로 입력하시오: ");
    scanf("%lf", &dist);
    printf("시간을 입력하시오: ");
    scanf("%lf", &h);
    printf("분을 입력하시오: ");
    scanf("%lf", &m);
    printf("초를 입력하시오: ");
    scanf("%lf", &s);

    printf("속도: %lf", (dist/1000.) / (h + (m/60.) + (s/3600.)));

    return 0;   
}