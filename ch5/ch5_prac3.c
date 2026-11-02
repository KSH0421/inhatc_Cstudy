#include <stdio.h>

int main() {
    int score = 0;

    while (score >= 0 && score <= 100) {
        scanf("%d", &score);
        if (score < 0 || score > 100) break;

        if (score >= 80) printf("Pass\n");
        else printf("Fail\n");
    }
    
}