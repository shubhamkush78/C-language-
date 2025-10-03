#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int*)malloc(12);

    printf("Before: %d  %d  %d", *(p+0), *(p+1), *(p+2));

    *(p+0) = 1234;
    *(p+1) = 345;
    *(p+2) = 56789;

    printf("\n\nAfter: %d  %d  %d", *(p+0), *(p+1), *(p+2));

    return 0;
}