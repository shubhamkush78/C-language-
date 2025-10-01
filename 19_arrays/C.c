#include <stdio.h>

int main() {

    int x[4][5], twoD_length, oneD_length, i, j;

    twoD_length = sizeof(x) / sizeof(x[0]);
    oneD_length = sizeof(x[0]) / sizeof(int);

    printf("%u\n~~~~~~~~~~~\n", x);

    for(i = 0; i < twoD_length; i++) {
        printf("%u %u\n", x[i], &x[i]);
    }

    return 0;
}