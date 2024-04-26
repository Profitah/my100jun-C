#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (1 <= n && n <= 10000) { 
        int sum = 0; // 변수 초기화. 해주지 않으면 이전에 할당된 메모리의 값이 들어가 있음.
        for (int i = 1; i <= n; i++) { // 1부터 n까지 더하기
            sum += i;
        }
        printf("%d\n", sum);
    } else {
        printf("1 이상 10,000 이하의 수를 입력하세요.\n");
    }

    return 0;
}
