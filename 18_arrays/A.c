#include <stdio.h>

int main() {

    int x1 = 3;
    int x2 = 5;
    int x3 = 7;
    int x4 = 9;

    printf("%d %d %d %d", x1, x2, x3, x4);
    printf("\n\n%u %u %u %u", &x1, &x2, &x3, &x4);

    return 0;
}