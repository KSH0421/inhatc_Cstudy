#include <stdio.h>

int main() {
    int select;
    printf("1. ADD\n2. EDIT\n3. DEL\n");
    scanf("%d", &select);

    switch (select)
    {
    case 1:
        printf("You selected ADD.");
        break;
    case 2:
        printf("You selected EDIT.");
        break;
    case 3:
        printf("You selected DEL.");
        break;
    default:
        printf("Wrong choice.");
        break;
    }
}