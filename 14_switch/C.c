#include <stdio.h>

int main() {

    char n;

    printf("Press m for male, f for female and o for others: ");
    scanf("%c", &n);

    switch(n) {
        case 'm':
            printf("AAA");
            break;
        case 'f':
            printf("BBB");
            break;
        case 'o':
            printf("CCC");
            break;
        default: 
            printf("Hi");
    }

    return 0;
}