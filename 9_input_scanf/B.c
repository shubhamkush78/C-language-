#include <stdio.h>

int main() {

    float x = 2.3f;

    printf("Before: %f\n", x);

    scanf("%f", &x);

    printf("After: %f", x);

    return 0;
}