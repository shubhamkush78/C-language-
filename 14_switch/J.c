#include <stdio.h>

int main() {

    int n;

    printf("Enter a number(1, 2 or 3): ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("Hello");
        default:
            printf("Bye");
        case 2:
            printf("Hi");
        case 3:
            printf("Namaste");        
    }

    return 0;
}