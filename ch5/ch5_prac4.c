#include <stdio.h>

int main() {
    int a;
    int sum = 0, cnt = 0;

    while (1) {
        scanf("%d", &a);
        if (a == 0) break;

        sum += a;
        cnt += 1;
    }

    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", (float)sum / cnt);
    
}