// ** 포인터 개념 **
// 1. 포인터 선언 방법 : int *p; 처럼 변수 앞에 *를 붙여 선언한다. | 포인터 변수 p를 선언한다.
// 2. 포인터 초기화 : int *p = &a; 처럼 변수의 주소를 저장한다. | 포인터 변수 p에 변수 a의 주소를 저장한다.
// 3. 포인터 역참조 : *p; 처럼 포인터 변수 앞에 *를 붙여 사용한다. | 포인터 변수 p가 가리키는 변수의 값을 가져오기 위해 사용한다.
// 4. 포인터 배열 :int arr[5] = {1, 2, 3, 4, 5}; int *p = arr;  // p는 arr의 첫 번째 요소를 가리킴 | 포인터 변수 p에 배열의 주소를 저장한다.
// 5. 동적 메모리 할당 : int *p = (int *)malloc(sizeof(int));  // 동적 메모리 할당 | malloc, calloc, realloc, free 함수를 사용한다.
// 6. 포인터와 배열 : int arr[5] = {1, 2, 3, 4, 5}; int *p = arr;  // p는 arr의 첫 번째 요소를 가리킴 | 포인터 변수 p에 배열의 주소를 저장한다.
// 7. 포인터의 종류: int *p;  // int형 포인터 | int형 변수를 가리키는 포인터

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int (*Ptr)(int, int);  // 함수 포인터 선언. Ptr이라는 이름과 int형 매개변수 2개를 받아 int형 값을 반환하는 함수를 가리키는 포인터로 선언

int add(int a, int b) {
    return a + b;
}

int main(void) {
    Ptr = add; // 포인터 변수 Ptr에 add 함수의 주소 저장. 

    int a, b;
     scanf("%d %d", &a, &b); 


    int result = Ptr(a, b); // Ptr이 가리키는 함수를 호출하고 결과를 result에 저장

    printf("%d + %d = %d", a, b, result); // 결과 출력
    
    return 0; 
}
