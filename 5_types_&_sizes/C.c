#include <stdio.h>

int main() {

    int x1 = sizeof(int);
    int x2 = sizeof(unsigned int);
    int x3 = sizeof(signed int);

    printf("%d\n", x1);
    printf("%d\n", x2);
    printf("%d", x3);

    return 0;
}