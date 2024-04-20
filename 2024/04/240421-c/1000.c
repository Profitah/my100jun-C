#include <stdio.h>

int main(){
    int A,B; // 정수 A,B를 선언

    scanf("%d %d",&A,&B); // scnanf로 A,B를 입력받기로 함. 서식지정자(%d)를 통해 정수형으로 받음.

    printf("%d",A+B); // A+B를 출력

}

/*

알게 된 것 : scanf와 서식지정자를 이용해 사용자로부터 입력받기
이 원리로 뺄셈, 곱셈, 나눗셈도 가능하다는 걸 알았다.
*/