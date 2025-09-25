#include <stdio.h>

int main() {

    int x1 = sizeof(23);
    int x2 = sizeof(23L);
    int x3 = sizeof(23l);

    printf("%d\n", x1);
    printf("%d\n", x2);
    printf("%d", x3);

    return 0;
}