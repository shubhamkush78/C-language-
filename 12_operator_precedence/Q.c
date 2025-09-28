#include <stdio.h>

int main() {

    int x = 15, y = 5;

    x /= x / y;

    printf("%d", x);

    return 0;
}