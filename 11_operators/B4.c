#include <stdio.h>

int main() {

    int a = 101;
    char b = 'e';

    printf("%d == %c = %d", a, b, a == b);
    printf("\n%d != %c = %d", a, b, a != b);

    return 0;
}