#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a>=b) {
        for (int i=1; i<=9; i++) {
            for (int j=a; j>=b; j--) {
                printf("%d * %d = %2d   ", j, i, j*i);
            }
            printf("\n");
        }
    }
    if (a<b) {
        for (int i=1; i<=9; i++) {
            for (int j=a; j<=b; j++) {
                printf("%d * %d = %2d   ", j, i, j*i);
            }
            printf("\n");
        }
    }
}