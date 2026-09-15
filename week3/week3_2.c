#include <stdio.h>

int main() {

    int score;

    printf("결과 점수를 입력해주세요(0~100): ");
    scanf("%d", &score);
    switch (score/10) {

    case 9:
        printf("학점은: A");
        break;
    case 8:
        printf("학점은: B");
        break;
    case 7:
        printf("학점은: C");
        break;
    case 6:
        printf("학점은: D");
        break;
    default:
        printf("학점은: F");
        break;
    }
}