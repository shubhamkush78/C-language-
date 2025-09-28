#include <stdio.h>

int main() {

    int x;

    // x = 15 < 55 && 32 > 23 || 9 < 18;
    // x = 15 > 55 && 32 > 23 || 9 > 18;
    x = 15 > 55 && 32 > 23 || 9 < 18;

    printf("%d", x);

    return 0;
}