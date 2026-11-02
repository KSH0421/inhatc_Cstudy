#include <stdio.h>

int main() {
    int a;
    int sum = 0;
    scanf("%d", &a);

    for (int i=0; i<=a; i+=5) sum += i;
    printf("%d", sum);
}