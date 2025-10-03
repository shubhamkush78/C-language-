#include <stdio.h>

int main() {

    int x[] = {10, 20, 30, 40, 50};

    printf("x: %u\n\n", x); 
    printf("&x: %u\n\n", &x); 
    printf("&x[0]: %u\n\n", &x[0]); 

    return 0;
}

