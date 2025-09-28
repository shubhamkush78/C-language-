#include <stdio.h>

int main() {

    int a = 101;
    float b = 101.0f;

    printf("%d == %f = %d", a, b, a == b); // 101 is equals to 101.0 => 1
    printf("\n%d != %f = %d", a, b, a != b); // 101 is not equals to 101.0 => 0

    return 0;
}