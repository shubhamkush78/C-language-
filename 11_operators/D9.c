#include <stdio.h>

int main() {

    int x = 21;

    printf("Before: %d", x);

    printf("\nAfter: %d", x--);
    
    printf("\nAfter: %d", ++x);

    return 0;
}