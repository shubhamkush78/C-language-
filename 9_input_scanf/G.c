#include <stdio.h>

int main() {
    int x;
    char y;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter a character: ");
    scanf("%c", &y);


    printf("The value entered: %d and %c", x, y);
    printf("Hello");

    return 0;
}