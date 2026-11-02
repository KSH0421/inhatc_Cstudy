#include <stdio.h>

int main() {
    int a;
    int cnt = 0;

    while (1) {
        scanf("%d", &a);
        if (a == 0) break;

        if (a%3 == 0) continue;
        if (a%5 == 0) continue;

        cnt += 1;
    }

    printf("%d", cnt);
    
}