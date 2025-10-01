#include <stdio.h>

int main() {

    int x[] = {10, 20, 30, 40, 50};

    int size = sizeof(x) / sizeof(int);

    int half = size / 2;

    int y, i, j;

    for(i=0;i<size;i++) {
        printf("%d ", x[i]);
    }

    for(i=0, j=size-1; i < half; i++, j--) {
        y = x[i];
        x[i] = x[j];
        x[j] = y;
    }

    printf("\n\n");
    for(i=0;i<size;i++) {
        printf("%d ", x[i]);
    }

    return 0;
}