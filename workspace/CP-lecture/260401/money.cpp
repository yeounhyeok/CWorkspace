#include<stdio.h>
int main(){
    int money, price;
    scanf("%d", &money);

    printf("물건값: \n");
    scanf("%d", &price);

    int change = money - price;
    printf("거스름돈: %d\n", change);

    printf("100원동전개수: %d\n", );
    printf("50원동전개수: %d\n", );
    printf("10원동전개수: %d\n", );


    return 0;
}