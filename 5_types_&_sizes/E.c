#include <stdio.h>

int main() {

    int x1 = sizeof(float);
    int x2 = sizeof(double);
    int x3 = sizeof(long double);

    printf("%d\n", x1);
    printf("%d\n", x2);
    printf("%d", x3);

    return 0;
}