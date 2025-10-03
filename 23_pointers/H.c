#include <stdio.h>

int main() {

    int x = 55, *p = &x;

    printf("before value of x: %d\n\n", x);
    printf("before value at p: %d\n\n", *p);
    *p = 11;
    printf("after value of x: %d\n\n", x);
    printf("after value at p: %d\n\n", *p);

    return 0;
}