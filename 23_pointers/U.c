#include <stdio.h>

void pro(char y[]) {
    printf("My Name Is: %s", y);
}

int main() {

    char x[22] = "barbareek";

    pro(x);

    return 0;
}