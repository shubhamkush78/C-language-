#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y, z;

    int *a = (int*)malloc(sizeof(int));
    int *b = (int*)malloc(sizeof(int));
    int *c = (int*)malloc(sizeof(int));

    printf("Address of x: %u\n", &x);
    printf("Address of y: %u\n", &y);
    printf("Address of z: %u", &z);
    printf("\n~~~~~~~~~~~~~~~~~~\n");
    printf("Vlaue of a: %u\n", a);
    printf("Vlaue of b: %u\n", b);
    printf("Vlaue of c: %u", c);

    return 0;
}