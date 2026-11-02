#include <stdio.h>

int main() {
    int a;
    int max = 0, min = 101;

    while (1) {
        scanf("%d", &a);
        if (a == 0) break;

        if (a >= 0 && a <= 100) {
            if (max < a) max = a;
            if (min > a) min = a;
        }
    }

    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);
}