#include <stdio.h>

int main() {
    int num = 1;
    int sum;

    while (num<=10) {
        sum += num;
        num +=1;
    }
    
    printf("sum = %d\n", sum);
    printf("num = %d", num);
}