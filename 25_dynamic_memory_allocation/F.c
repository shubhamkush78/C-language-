#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int*)malloc(sizeof(int));

    *p = 89;

    printf("Before: %d - %u", *p, p);  

    free(p);

    printf("\n\nAfter: %d - %u", *p, p); // dangling pointer

    return 0;
}