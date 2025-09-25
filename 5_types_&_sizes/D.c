#include <stdio.h>

int main() {

    int x1 = sizeof(long);
    int x2 = sizeof(unsigned long);
    int x3 = sizeof(signed long);

    printf("%d\n", x1);
    printf("%d\n", x2);
    printf("%d", x3);

    return 0;
}