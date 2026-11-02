#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i=a; i>=1; i--) {
        for (int k=1; k<=a-i; k++) {
            printf(" ");
        }
        for (int j=1; j<=2*a; j++) {
            printf("*");
        }
        printf("\n");
    }
}