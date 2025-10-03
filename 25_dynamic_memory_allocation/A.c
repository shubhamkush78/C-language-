#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int*)malloc(4);

    printf("Before: %d\n", *p);

    *p = 89;

    printf("After: %d", *p);

    return 0;
}