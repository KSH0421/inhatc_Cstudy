#include <stdio.h>

int main() {
    int a;
    int small = 0, large = 1;

    while (1) {
        scanf("%d", &a);
        if (a >= 100) break;

        if (a >= 50) large += 1;
        if (a < 50) small += 1;
    }

    printf("small : %d\n", small);
    printf("large : %d\n", large);
}