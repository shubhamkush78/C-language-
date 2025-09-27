#include <stdio.h>

int main() {

    char x = 'Y';

    printf("Before: %c\n", x);

    scanf("%c", &x);

    printf("After: %c", x);

    return 0;
}