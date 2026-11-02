#include <stdio.h>

int main() {
    int cm, kg;
    scanf("%d", &cm);
    scanf("%d", &kg);

    printf("%d", kg+100-cm);
    if (kg+100-cm > 0) {
        printf("\nObesity\nNeed control");
    }
}