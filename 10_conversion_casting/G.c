#include <stdio.h>

int main() {

    char a = 'A';
    char b = 'a';

    int x = sizeof(a + b);

    printf("%d", x);

    return 0;
}