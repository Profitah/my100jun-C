#include <stdio.h>

// 피보나치 수열의 n번째 수를 계산하는 함수
// n: 계산할 피보나치 수열의 인덱스
// result: 계산된 피보나치 수를 저장할 포인터
void fibonaccifunc(int n, int *result) {
    int a = 0, b = 1, temp;

    // n이 0일 경우 첫 번째 피보나치 수는 0
    if (n == 0) {
        *result = a; // 포인터 result가 가리키는 메모리 위치에 값을 저장
        return;
    // n이 1일 경우 두 번째 피보나치 수는 1
    } else if (n == 1) {
        *result = b; // 포인터 result가 가리키는 메모리 위치에 값을 저장
        return;
    }

    // n이 2 이상일 경우 피보나치 수열을 계산
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    // 계산된 n번째 피보나치 수를 result가 가리키는 메모리 위치에 저장
    *result = b;
}

int main() {
    int n, result;
    // 사용자로부터 피보나치 수열의 인덱스를 입력받음
    scanf("%d", &n);
    
    // fibonaccifunc 함수를 호출하여 n번째 피보나치 수를 계산하고 result에 저장
    fibonaccifunc(n, &result);

    // 계산된 n번째 피보나치 수를 출력
    printf("%d\n", result);
    return 0;
}
