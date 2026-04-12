#include<stdio.h>

int main(){
    char ch;
    printf("문자를 입력하시오: ");
    scanf("%c", &ch);

    printf("아스키 코드: %d\n", ch);
    return 0;   
}