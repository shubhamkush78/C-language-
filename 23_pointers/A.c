#include <stdio.h>

int main() {

    char *a;
    int *b;
    short *c;
    long *d;
    float *e;
    double *f;
    long double *g;

    printf("byte size of a pointer to a character is %d\n\n", sizeof(a));
    printf("byte size of a pointer to an integer is %d\n\n", sizeof(b));
    printf("byte size of a pointer to a short int is %d\n\n", sizeof(c));
    printf("byte size of a pointer to a long int is %d\n\n", sizeof(d));
    printf("byte size of a pointer to a float is %d\n\n", sizeof(e));
    printf("byte size of a pointer to a double is %d\n\n", sizeof(f));
    printf("byte size of a pointer to a long double is %d\n\n", sizeof(g));

    return 0;
}