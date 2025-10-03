#include <stdio.h>

int main() {

    int x[] = {10, 20, 30, 40, 50};
    int *p = x;
     
    printf("x[0]: %d -> *(p+0): %d\n\n", x[0], *(p+0)); 
    printf("x[1]: %d -> *(p+1): %d\n\n", x[1], *(p+1)); 
    printf("x[2]: %d -> *(p+2): %d\n\n", x[2], *(p+2)); 
    printf("x[3]: %d -> *(p+3): %d\n\n", x[3], *(p+3)); 
    printf("x[4]: %d -> *(p+4): %d\n\n", x[4], *(p+4)); 

    return 0;
}

