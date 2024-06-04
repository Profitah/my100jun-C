#include <stdio.h>
#include <string.h>

int main() {
    int testCase;  
    scanf("%d", &testCase);  // 사용자로부터 테스트 케이스의 개수를 입력받기

    while (testCase--) {
        char inputStr[80];  // 배열의 크기 지정. c언어에서 배열을 사용하기 위해선 반드시 크기를 지정해야 함.
        scanf("%s", inputStr);  

        int totalScore = 0, consecutiveCount = 0; 

        for (int i = 0; i < strlen(inputStr); i++) {
            if (inputString[i] == 'O') {  
                consecutiveCount++;  
                totalScore += consecutiveCount;  
            } else {  
                consecutiveCount = 0;  
            }
        }

        printf("%d\n", totalScore);  
    }

    return 0;  
}
