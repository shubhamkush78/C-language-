#include <stdio.h>

int main() {

    int x;

    // x = 15 > 45 || 45 > 23 && 11 < 32;
    // x = 15 < 45 || 45 > 23 && 11 < 32;

    x = 3 > 5 || 5 < 3 || 45 > 90 && 2 < 3;

    printf("%d", x);

    return 0;
}