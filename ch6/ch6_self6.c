#include <stdio.h>

int main() {
    int a, n;
    int sum = 0;

    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("avg : %.1f\n", (float)sum/n);
    if ((float)sum/n >= 80.0) printf("pass");
    else printf("fail");
}