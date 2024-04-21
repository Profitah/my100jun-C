#include <stdio.h>

int main() {
    int A, B;

    scanf("%d %d", &A, &B);

    printf("%.9lf", (double)A / B);  // double형으로 형변환하여 출력, 소수점 9자리까지 출력
}

/*

포인트  : c언어에서 형변환 , 형식지정지를 이용해 소수점 n 자리까지 출력

*/