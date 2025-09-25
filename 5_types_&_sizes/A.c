#include <stdio.h>

int main() {

    int x1 = sizeof(char);
    int x2 = sizeof(unsigned char);
    int x3 = sizeof(signed char);

    printf("%d\n", x1);
    printf("%d\n", x2);
    printf("%d", x3);

    return 0;
}