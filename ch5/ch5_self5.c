#include <stdio.h>

int main() {
    int a;

    while (1) {
        scanf("%d", &a);
        if (a == -1) break;

        if (a % 3 == 0) printf("%\nd", a/3);
    }
}