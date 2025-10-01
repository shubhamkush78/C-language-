#include <stdio.h>

int main() {

    int x[] = {};

    int length = sizeof(x)/sizeof(int);

    printf("Length of one-d array: %d", length);
    printf("\nvalue of x[0]: %d", x[0]);

    return 0;
}
