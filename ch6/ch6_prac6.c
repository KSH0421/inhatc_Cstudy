#include <stdio.h>

int main() {
    int a;
    int sum = 0;

    for (int i=1; i<=5; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f", (float)sum/5);
}