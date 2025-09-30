#include <stdio.h>

int main() {

    int x[5] = {10, 20, 30, 40, 50}, i, size;

    size = sizeof(x)/sizeof(x[0]);

    for(i = size-1; i >= 0; i--) {
        printf("(%d) - %d \n", i, x[i]);
    }    

    return 0;
}