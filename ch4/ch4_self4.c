#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    switch (score/10)
    {
    case 9:
        printf("Excellent");
        break;
    case 8:
        printf("Good");
        break;
    case 7:
        printf("Pass");
        break;
    default:
        printf("Fail");
        break;
    }
}