#include <stdio.h>

int main() {
    int a;
    int cnt = 0;

    for (int i=1; i<=10; i++) {
        scanf("%d", &a);
        if (a%2 == 0) cnt += 1;
    }
    printf("Even numbers = %d", cnt);
}