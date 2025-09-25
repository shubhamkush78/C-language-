#include <stdio.h>

int main() {

    int x1 = sizeof(short);
    int x2 = sizeof(unsigned short);
    int x3 = sizeof(signed short);

    printf("%d\n", x1);
    printf("%d\n", x2);
    printf("%d", x3);

    return 0;
}