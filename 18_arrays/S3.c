#include <stdio.h>

int main() {

    int x[] = {10, 20, 30, 40, 50};

    int size = sizeof(x) / sizeof(int);

    int half = size / 2;

    int y, i;

    for(i=0;i<size;i++) {
        printf("~%d~ ", x[i]);
    }

    for(i=0; i < half; i++) {
        y = x[i];
        x[i] = x[size-i-1];
        x[size-i-1] = y;
    }

    printf("\n\n");
    for(i=0;i<size;i++) {
        printf("~%d~ ", x[i]);
    }

    return 0;
}