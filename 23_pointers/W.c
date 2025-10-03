#include <stdio.h>

// Pass By Value
void pro(int a) {
    a = a + 2;
}

int main() {

    int x = 10;

    printf("Before: %d", x);

    pro(x);

    printf("\nAfter: %d", x);

    return 0;
}