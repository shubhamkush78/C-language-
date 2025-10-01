#include <stdio.h>

int main() {

    int x[] = {10, 20, 30, 40, 50};

    int size = sizeof(x) / sizeof(int);

    int half = size / 2;

    int y, i, j;

    for(i=0, j=size-1; i < half; i++, j--) {
        printf("%d %d\n", i, j);
    }

    return 0;
}