#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // 배열의 포인터에 n개의 int 포인터를 저장할 수 있도록 동적 메모리를 할당. (배열의 크기가 정해져 있지 않기 때문에 동적 메모리 할당)
    int **arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        //malloc함수를 이용해 2개의 int 값을 저장할 수 있는 공간을 할당 (malloc 함수 ; 메모리를 동적으로 할당하는 함수)
        arr[i] = (int *)malloc(2 * sizeof(int));
    }

    // 사분면 카운터 배열에 5개의 int 값을 저장할 수 있는 공간을 할당
    int *q = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < n; i++) { // 배열의 포인터에 저장된 포인터에 값을 저장하는 작업을 n번 반복
        scanf("%d %d", &arr[i][0], &arr[i][1]); 
        int a = arr[i][0]; 
        int b = arr[i][1]; 

        if (a == 0 || b == 0) {
            q[4]++;  
        } else if (a > 0 && b > 0) {
            q[0]++;
        } else if (a < 0 && b > 0) {
            q[1]++;
        } else if (a < 0 && b < 0) {
            q[2]++;
        } else {
            q[3]++;
        }
    }

    printf("Q1: %d\n", q[0]);
    printf("Q2: %d\n", q[1]);
    printf("Q3: %d\n", q[2]);
    printf("Q4: %d\n", q[3]);
    printf("AXIS: %d\n", q[4]);

    // 프로그램이 종료되어도 메모리가 해제되지 않으면 메모리 누수가 발생할 수 있기 때문에 동적으로 할당된 메모리를 해제함
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    // free함수로 배열의 포인터에 할당된 메모리 해제 
    free(arr);
    // free함수로 사분면 카운터 배열에 할당된 메모리 해제
    free(q);

    return 0;
}