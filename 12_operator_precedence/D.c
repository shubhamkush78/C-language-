#include <stdio.h>

int main() {

    int x;

    // x = 23 < 34 < 45;
    // x = 23 < 34 < 12;
    x = 45 < 34 < 12;

    printf("%d", x);

    return 0;
}