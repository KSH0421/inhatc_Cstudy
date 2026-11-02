#include <stdio.h>

int main() {
    int a;
    int cnt = 0, sum = 0;
    scanf("%d", &cnt);

    for (int i=1; i<=cnt; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("%.2f", (float)sum/cnt);
}