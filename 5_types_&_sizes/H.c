#include <stdio.h>

int main() {

    float a;
    double b;
    long double c;

    int x1 = sizeof(a);
    int x2 = sizeof(b);
    int x3 = sizeof(c);

    printf("%d\n", x1);
    printf("%d\n", x2);
    printf("%d", x3);

    return 0;
}