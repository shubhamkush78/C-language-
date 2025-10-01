#include <stdio.h>

int main() {

    char x[15];

    printf("Before: >%s<\n\n", x);

    printf("Enter your name: ");
    scanf("%[A-Za-z ]", &x);

    printf("\n\nAfter: %s", x);

    return 0;
}