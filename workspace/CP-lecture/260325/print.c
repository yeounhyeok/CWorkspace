#include<stdio.h>
#include<stdlib.h>

int main(){
    int age, id, outcome;
    char c;
    double star;

    printf("나이를 입력하십시오: ");
    scanf("%d", &age);
    printf("나이: %d\n", age);

    printf("직원 아이디를 입력하십시오: ");
    scanf("%d", &id);
    printf("아이디: %d\n", id);
    
    printf("생산량을 입력하십시오: ");
    scanf("%d", &id);
    printf("생산량: %d\n", id);
    
    printf("별의 개수를 입력하십시오: ");
    scanf("%lf", &star);
    printf("별의 개수: %e\n", star);
    

    printf("글자를 입력하십시오: ");
    scanf(" %c", &c);
    printf("글자: %c\n", c);
    
    return 0;
}