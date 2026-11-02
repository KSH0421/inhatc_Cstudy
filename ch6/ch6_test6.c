#include <stdio.h>

int main() {
    int a, b;
    int sum = 0, cnt = 0;
    scanf("%d %d", &a, &b);

    if (a>=b) {
        for (int i=b; a>=i; i++) {
            if (i%3 == 0 || i%5 == 0) {
                sum += i;
                cnt += 1;
            }
        }
        printf("sum : %d\n", sum);
        printf("avg : %.1f", (float)sum/cnt);
    }
    else if (a<b) {
        for (int i=a; i<=b; i++) {
            if (i%3 == 0 || i%5 == 0) {
                sum += i;
                cnt += 1;
            }
        }
        printf("sum : %d\n", sum);
        printf("avg : %.1f", (float)sum/cnt);
    }
}