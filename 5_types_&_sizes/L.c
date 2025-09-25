#include <stdio.h>

int main() {

    int x1 = sizeof(2.3);
    int x2 = sizeof(2.3L);
    int x3 = sizeof(2.3f);

    printf("%d\n", x1);
    printf("%d\n", x2);
    printf("%d", x3);

    return 0;
}