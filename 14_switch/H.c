#include <stdio.h>

int main() {

    int n;

    printf("Enter a number(1, 2 or 3): ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("Hello");
        case 2:
            printf("Hi");
        case 3:
            printf("Namaste");
        default:
            printf("Bye");
    }

    return 0;
}