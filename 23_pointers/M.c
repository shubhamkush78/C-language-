#include <stdio.h>

int main() {

    int x[] = {10, 20, 30, 40, 50};
    int *p = x;
     
    printf("&x[0]: %u -> p+0: %u\n\n", &x[0], p+0); 
    printf("&x[1]: %u -> p+1: %u\n\n", &x[1], p+1); 
    printf("&x[2]: %u -> p+2: %u\n\n", &x[2], p+2); 
    printf("&x[3]: %u -> p+3: %u\n\n", &x[3], p+3); 
    printf("&x[4]: %u -> p+4: %u\n\n", &x[4], p+4); 

    return 0;
}

