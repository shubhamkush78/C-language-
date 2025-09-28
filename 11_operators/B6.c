#include <stdio.h>

int main() {

    float a = 101.54320f;
    float b = 101.5432f;

    printf("%f == %f = %d", a, b, a == b); 
    printf("\n%f != %f = %d", a, b, a != b); 

    return 0;
}