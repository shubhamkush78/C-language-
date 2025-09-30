#include <stdio.h>

int main() {

    char x1 = 65;
    short x2 = 5;
    int x3 = 7;
    long long x4 = 9;

    printf("%c %d %d %ld", x1, x2, x3, x4);
    printf("\n\n%d %d %d %d", sizeof(x1), sizeof(x2), sizeof(x3), sizeof(x4));
    printf("\n\n%u %u %u %u", &x1, &x2, &x3, &x4);

    return 0;
}