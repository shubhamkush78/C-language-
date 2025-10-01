#include <stdio.h>

int main() {

    int x[4][5], twoD_length, oneD_length;

    twoD_length = sizeof(x) / sizeof(x[0]);
    oneD_length = sizeof(x[0]) / sizeof(int);

    printf("row size: %d", twoD_length);
    printf("\ncol size: %d", oneD_length);

    return 0;
}