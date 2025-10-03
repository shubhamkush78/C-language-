#include <stdio.h>

void pro(char *y) {
    y[0] = 't';
}

int main() {

    char x[22] = "barbareek";

    printf("Before: %s\n\n", x);
    pro(x);
    printf("After: %s", x);

    return 0;
}