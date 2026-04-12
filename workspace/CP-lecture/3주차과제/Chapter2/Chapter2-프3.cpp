#include <stdio.h>

int main(){
    int n, price;
    printf("상품 가격을 입력하시오: ");
    scanf("%d", &price);

    printf("상품의 개수를 입력하시오: ");
    scanf("%d", &n);

    printf("총 가격은 %d입니다.\n", n*price);

    return 0;
}