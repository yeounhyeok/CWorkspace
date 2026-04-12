
// 사용자로부터 입력받은 정수 2개의 합을 계산하여 출력
// 비주얼 스튜디오 사용자라면 다음 문장이 필요하다.
#include <stdio.h>
 
void printBinary(int n) {
    // 32비트 정수 기준으로 31번째 비트부터 0번째 비트까지 확인
    for (int i = 31; i >= 0; i--) {
        int k = n >> i; // i번재 비트를 맨 오른쪽으로 이동
        if (k & 1) // 1과 AND 연산하여 1인지 확인
            printf("1");
        else
            printf("0");
        
        // 4비트마다 공백 출력 (가독성)
        if (i % 3 == 0) printf(" ");
    }
    printf("\n");
}


int main(void)
{
    int x;              // 첫 번째 정수를 저장할 변수
    int y;              // 두 번째 정수를 저장할 변수
    int sum;                // 2개의 정수의 합을 저장할 변수
 
    printf("첫 번째 숫자를 입력하시오:");   // 입력 안내 메시지 출력
    scanf("%d", &x);            // 하나의 정수를 받아서 x에 저장
 
    printf("두 번째 숫자를 입력하시오:");   // 입력 안내 메시지 출력
    scanf("%d", &y);            // 하나의 정수를 받아서 x에 저장
 
    sum = x + y;            // 변수 2개를 더한다.
    //printBinary(x);
    //printBinary(y);
    printBinary(sum);  
    
    printf("%o \n", sum); // sum의 값을 10진수 형태로 출력
 
    return 0;           // 0을 외부로 반환
}
