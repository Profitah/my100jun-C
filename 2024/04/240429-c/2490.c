#include <stdio.h>

int main() {

    int n;

    for (int i = 0; i < 3; i++) {
        int x = 0;

        for (int i = 0; i < 4; i++) {
            scanf("%d", &n);
            if (n == 0)
                x++;
        }

        switch (x) {
            case 0:
                printf("E\n");
                break;
            case 1:
                printf("A\n");
                break;
            case 2:
                printf("B\n");
                break;
            case 3:
                printf("C\n");
                break;
            case 4:
                printf("D\n");
                break;
            default:
                printf("Invalid input\n");
        }
    }
    return 0;
}
