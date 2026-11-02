#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a>b) for (int i=b; a>=i; i++) printf("%d ", i);
    else if (a<b) for (int i=a; i<=b; i++) printf("%d ", i);
    else printf("%d", a);
}