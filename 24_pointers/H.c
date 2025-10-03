#include <stdio.h>

int main() {

    int x = 567;

    int *p = &x;

    int **q = &p;

    int ***r = &q;

    printf("**r: %u *r: %u r: %u\n\n", &x, &p, &q);

    printf("r: %u\n\n", r);
    printf("*r: %u\n\n", *r);
    printf("**r: %u\n\n", **r);
    printf("***r: %d\n\n", ***r);

    return 0;
} 