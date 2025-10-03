#include <stdio.h>

int x[] = {12, 13, 14};

int* pro() {
    return x;
}

int main() {

    int *t = pro();

    printf("%d %d %d", t[0], t[1], t[2]);

    return 0;
}