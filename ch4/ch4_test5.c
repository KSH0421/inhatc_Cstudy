#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    m = (m>7) + (m==2)*3 + (m%2);

    switch (m)
    {
    case 0:
    case 2:
        printf("30");
        break;
    case 3:
        printf("28");
        break;
    default:
        printf("31");
        break;
    }
}