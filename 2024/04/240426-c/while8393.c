#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (1 <= n && n <= 10000) { 
        int sum = 0; // 변수 초기화. 해주지 않으면 이전에 할당된 메모리의 값이 들어가 있음.
        int i = 1; // 반복문에서 사용할 변수 초기화. for문에서는 for문 안에서 선언하고 초기화하지만 while문에서는 밖에서 선언하고 초기화해야 함.
        while (i <= n) { // 1부터 n까지 더하기
            sum += i;
            i++; // 증감식
        }
        printf("%d\n", sum);
    } else {
        printf("1 이상 10,000 이하의 수를 입력하세요.");
    }

    return 0;
}
