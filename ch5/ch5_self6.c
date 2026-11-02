#include <stdio.h>

int main() {
    int select;
    while (1) {
        printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? \n");
        scanf("%d", &select);

        switch (select)
        {
        case 1:
            printf("Seoul\n\n");
            continue;
        case 2:
            printf("Washington\n\n");
            continue;
        case 3:
            printf("Tokyo\n\n");
            continue;
        case 4:
            printf("Beijing\n\n");
            continue;
        default:
            printf("none");
            break;
        }
        break;
    }
    
}