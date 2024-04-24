#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);

	if (A > B) {
		printf(">");
	}
	else if (A < B) {
		printf("<");
	}
	else {
		printf("==");
	}

	return 0;
}

/*

포인트  : c언어에서 조건문 사용

*/