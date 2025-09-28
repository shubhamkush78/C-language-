#include <stdio.h>

int main() {

    int x, y = 2;

    x = +++y;  

    x = ++++y;

    x = ---y;

    printf("%d", x);

    return 0;
}