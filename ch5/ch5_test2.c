#include <stdio.h>

int main() {
    int a;
    int odd = 0, even = 0;

    while (1) {
        scanf("%d", &a);
        if (a == 0) break;

        if (a%2 == 0) even +=1;
        else odd +=1;
    }

    printf("odd : %d\n", odd);
    printf("even : %d\n", even);
}