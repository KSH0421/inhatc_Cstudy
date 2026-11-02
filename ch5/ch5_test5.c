#include <stdio.h>

int main() {
    int x, y;

    while (1) {
        scanf("%d %d", &x, &y);

        printf("Triangle area = %.1f\n", (float)x*y/2);
        printf("Continue? "); char ans;
        scanf(" %c", &ans);

        if (ans == 'y' || ans == 'Y') continue;
        break;
    }
}