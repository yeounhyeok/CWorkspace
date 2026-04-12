#include<stdio.h>

int main(){
    int x, h, m, s;

    printf("초단위 입력해라: ");
    scanf("%d", &x);

    h = x / (60 * 60);
    m = x / 60 - h * 60;
    s = x - h * (60 * 60) - m * 60;

    printf("%d초는 %d시간 %d분 %d초\n", x, h, m, s);

    return 0; 
}