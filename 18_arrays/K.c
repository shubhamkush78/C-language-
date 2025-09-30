#include <stdio.h>

int main() {

    int x[4] = {10, 20, 30, 40}, i, size, sum=0;

    size = sizeof(x)/sizeof(x[0]);

    for(i=0; i<size; i++) {
        sum = sum + x[i];
    }

    printf("%d", sum);

    return 0;
}