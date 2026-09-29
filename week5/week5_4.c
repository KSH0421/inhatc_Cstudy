#include <stdio.h>

int main() {
    int x, y, z;
    int arr[10] = {0};

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    int n = x * y * z;
    printf("%d \n", n);

    while (1) {

        arr[n % 10]++;
        n/=10;

        if (n < 0) {
            break;
        }
    }

    for (int i=0; i<10; i++) {
        printf("%d \n", arr[i]);
    }
}
