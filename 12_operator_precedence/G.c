#include <stdio.h>

int main() {

    int x;

    x = (printf("A") + printf("BC")) * (printf("DEF") + printf("GHIJ"));

    printf("%d", x);

    return 0;
}