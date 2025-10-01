#include <stdio.h>

int main() {

    int a = 2, b = 3, c;

    printf("a: %d - b: %d", a, b);
    
    c = a;
    a = b;
    b = c;
    
    printf("\na: %d - b: %d", a, b);

    return 0;
}