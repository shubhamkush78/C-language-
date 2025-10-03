#include <stdio.h>

int main() {

    int x = 11, *p = &x;
    int y = 12, *q = &y;

    printf("address of x: %u", p);
    printf("\naddress of y: %u", q);
    printf("\n\npointer variable's subtraction: %d", p-q);

    return 0;
}