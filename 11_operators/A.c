#include <stdio.h>

int main() {

    int a = 19;
    int b = 3;

    int c = a + b;

    printf("%d", c);

    printf("%d + %d = %d", a, b, a + b);
    printf("\n%d - %d = %d", a, b, a - b);
    printf("\n%d * %d = %d", a, b, a * b);
    printf("\n%d / %d = %d", a, b, a / b);
    printf("\n%d %% %d = %d", a, b, a % b);

    return 0;
}