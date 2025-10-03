#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int*)calloc(3, sizeof(int));

    printf("Before: %d  %d  %d", *(p+0), *(p+1), *(p+2));

    *(p+0) = 1234;
    *(p+1) = 345;
    *(p+2) = 56789;

    printf("\n\nAfter: %d  %d  %d", *(p+0), *(p+1), *(p+2));

    int *q = (int*)realloc(p, 20);

    printf("\n\nAfter Reallocation: %d  %d  %d %d %d", *(q+0), *(q+1), *(q+2), *(q+3), *(q+4));
    
    *(q+3) = 78; 
    *(q+4) = 11; 

    printf("\n\nAfter Reinitialization: %d  %d  %d %d %d", *(q+0), *(q+1), *(q+2), *(q+3), *(q+4));

    return 0;
}