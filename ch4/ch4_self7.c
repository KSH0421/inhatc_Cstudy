#include <stdio.h>

int main() {
    char score;
    scanf("%c", &score);

    switch (score)
    {
    case 'A':
        printf("Excellent");
        break;
    case 'B':
        printf("Good");
        break;
    case 'C':
        printf("Usually");
        break;
    default:
        printf("error");
        break;
    }
}