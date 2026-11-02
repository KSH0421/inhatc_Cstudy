#include <stdio.h>

int main() {
    int d1, d2;
    scanf("%d %d", &d1, &d2);

    if (d1 >= 4 && d2 >=4)
        printf("WIN.");
    else if (d1 >= 4 || d2 >=4)
        printf("DRAW.");
    else
        printf("LOSE.");
}