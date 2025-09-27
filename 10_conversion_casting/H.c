#include <stdio.h>

int main() {

    float a = 2.1f;
    double b = 4.5;

    int x = sizeof(a + b);

    printf("%d", x);

    return 0;
}