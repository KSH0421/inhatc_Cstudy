#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a >= 0)
        printf("%s", (a%2 == 0) ? "Even Number" : "Odd Number");
    else
        printf("Non positive");
}