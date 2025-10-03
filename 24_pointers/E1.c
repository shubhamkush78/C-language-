#include <stdio.h>

int main() {

    int (*p)[3];

    *p[0] = 12;
    *p[1] = 67;
    *p[2] = 43;

    
    printf("%d %d %d\n\n", *p[0], *p[1], *p[2]);

    return 0;
}