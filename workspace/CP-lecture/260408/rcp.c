#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int x;
    printf("가위:0, 바위:1, 보:2 하나 선택하셈: ");
    scanf("%d", &x);

    int r = rand()%3; //computer

    printf("사용자 : %d\n", x);
    printf("컴퓨터 : %d\n", r);
    
    if(x==r) printf("비김\n");
    else if(x+1==r || x-2==r) printf("컴퓨터 승리\n");
    else printf("사용자 승리\n");

    return 0;
}