#include <stdio.h>

int main() {

    short a = 21;
    char b = 'a';

    int x = sizeof(a + b);

    printf("%d", x);

    return 0;
}