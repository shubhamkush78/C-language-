#include <stdio.h>

int main() {

    int x[] = {10, 20, 30, 40, 50};

    printf("x: %u\n\n", x); 
    printf("&x: %u\n\n", &x); 
    printf("&x[0]: %u\n\n", &x[0]); 
    printf("&x[1]: %u\n\n", &x[1]); 
    printf("&x[2]: %u\n\n", &x[2]); 
    printf("&x[3]: %u\n\n", &x[3]); 
    printf("&x[4]: %u\n\n", &x[4]); 

    return 0;
}

