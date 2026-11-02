#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i=a; i>=1; i--) {
        for (int k=i; k<a; k++) {
            printf(" ");
        }
        for (int j=a-1; j>=a-i; j--) {
            printf("*");
        }
        printf("\n");
    }
}