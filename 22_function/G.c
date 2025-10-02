#include <stdio.h>

void pro(int y[]) {
    y[0] = 99;
    y[1] = 88;
    y[2] = 77;
}

int main() {

    int x[] = {10, 20, 30};

    printf("%d %d %d\n\n", x[0], x[1], x[2]);

    pro(x); 

    printf("%d %d %d\n\n", x[0], x[1], x[2]);

    return 0;
}