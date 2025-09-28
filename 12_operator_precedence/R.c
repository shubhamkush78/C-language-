#include <stdio.h>

int main() {

    int x;

    x = !~5 || 12 > 15 && 45 > 12 || 10;

    printf("%d", x);

    return 0;
}