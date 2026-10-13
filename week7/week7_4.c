#include <stdio.h>
#define MAX_SIZE 50

void Sort_TestScore() {
    
}

int main() {
    int student;
    int num;
    int* ScorePointer;
    int score[MAX_SIZE];
    ScorePointer = score;

    printf("학생 수 입력 : ");
    scanf("%d", &student);
    if (student <= 50 && student >= 0) {
        for(int i=0; i <= student - 1; i++) {
            printf("%d번 학생의 성적 입력 : ", i+1);
            scanf("%d", &num);
            score[i] = num;
        }
        for(int i=1; i <= student; i++) {
            printf("%3d", *score);
        }
    }
    else {
        printf("유효하지 않은 수 입니다.");
        return 1;
    }
}