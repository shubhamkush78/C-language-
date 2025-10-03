#include <stdio.h>

int main() {

    int x;
    x = 67;

    int *p;
    p = &x;

    printf("value of x: %d\n\n", x);
    printf("value at p: %d\n\n", *p);

    return 0;
}