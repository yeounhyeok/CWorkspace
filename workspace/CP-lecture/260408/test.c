#include<stdio.h>

int main(){
    int m, ans;
    printf("일수를 알고싶은 달을 입력하세요: ");
    scanf("%d", &m);

    switch(m)
    {
    case 2:
        ans=28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        ans=30;
        break;
    default:
        ans=31;
        break;
    }

    printf("%d월의 일수는 %d입니다.\n", m, ans);
    
    return 0;
}