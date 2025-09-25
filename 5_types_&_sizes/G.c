#include <stdio.h>

int main() {

    short a;
    int b;
    long c;

    int x1 = sizeof(a);
    int x2 = sizeof(b);
    int x3 = sizeof(c);

    printf("%d\n", x1);
    printf("%d\n", x2);
    printf("%d", x3);

    return 0;
}