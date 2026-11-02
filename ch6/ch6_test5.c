#include <stdio.h>

int main() {
    int a;
    int odd = 0, even = 0;

    for (int i=1; i<=10; i++) {
        scanf("%d", &a);
        switch (a%2)
        {
        case 1:
            odd += 1;
            break;
        case 0:
            even += 1;
            break;
        }
    }
    printf("even : %d\n", even);
    printf("odd : %d", odd);
}