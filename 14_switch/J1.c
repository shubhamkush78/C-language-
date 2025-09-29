#include <stdio.h>

int main() {

    int n;

    printf("Enter a number(1, 2 or 3): ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("Hello");
            break;
        default:
            printf("Bye");
            break;
        case 2:
            printf("Hi");
            break;
        case 3:
            printf("Namaste");        
    }

    return 0;
}