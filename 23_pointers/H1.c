#include <stdio.h>

int main() {

    int *p = &x, x = 55;

    printf("before value of x: %d\n\n", x);
    printf("before value at p: %d\n\n", *p);
    *p = 11;
    printf("after value of x: %d\n\n", x);
    printf("after value at p: %d\n\n", *p);

    return 0;
}


// H1.c:5:15: error: 'x' undeclared (first use in this function)