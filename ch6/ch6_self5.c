#include <stdio.h>

int main() {
    int a;
    int th = 0, ft = 0;

    for (int i=1; i<=10; i++) {
        scanf("%d", &a);
        if (a%3 == 0) th += 1;
        if (a%5 == 0) ft += 1;
    }
    printf("Multiples of 3 : %d\n", th);
    printf("Multiples of 5 : %d", ft);
}