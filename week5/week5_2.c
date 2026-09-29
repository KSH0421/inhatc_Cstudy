#include <stdio.h>

int main() {
    int num = 0;
    int arr[6] ={0};

    for (int i=0; i<10; i++) {
        scanf("%d", &num);
        arr[num - 1]++;
    }
    
    for (int i=1; i<7; i++) {
        printf("%d : %d \n", i, arr[i-1]);
    }
}