#include<stdio.h>

int main(){
    int x=1, x_minus;
    x_minus = ~x + 1;

    printf("%b %d\n%b %d\n", x, x, x_minus, x_minus);

    
    return 0;
}