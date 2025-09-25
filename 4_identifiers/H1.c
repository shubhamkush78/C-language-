#include <stdio.h>

int main() {
    const int count = 100;

    printf("%d", count);

    count = 10; // you can't re-assign a constant variable...

    printf("\n%d", count);

    return 0;
}