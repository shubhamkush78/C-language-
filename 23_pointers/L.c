#include <stdio.h>

// array pointer
int main() {

    int x[] = {10, 20, 30, 40, 50};
    int *p = x; 
    // int *p = &x;  //warning

    printf("x: %u\n\n", x); 
    printf("&x: %u\n\n", &x); 
    printf("&x[0]: %u\n\n", &x[0]); 
    printf("p: %u\n\n", p); 

    return 0;
}

