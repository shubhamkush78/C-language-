#include <stdio.h>

int main() {

    int x = 21;
    int *p = &x;

    printf("value of x: %d\n\n", x);  // 21
    printf("address of x: %u\n\n", &x); // 6785645
    printf("value of p: %u\n\n", p); // 6785645
    printf("address of p: %u\n\n", &p); // 6878599
    printf("value at p: %d\n\n", *p); // 21

    return 0;
}