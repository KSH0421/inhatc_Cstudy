#include <stdio.h>

int main() {
    int a;
    int sum = 0, cnt = 0;

    while (1) {
        scanf("%d", &a);
        if (a < 0 || a > 100) break;

        sum += a;
        cnt += 1;
    }

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (float)sum / cnt);
    
}