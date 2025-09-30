#include <stdio.h>

int main() {    

    int x[5];

    printf("%d %d %d %d %d \n", x[0], x[1], x[2], x[3], x[4]);

    x[0] = 56;
    x[1] = 11;
    x[2] = 78;
    x[3] = 32;
    x[4] = 9;


    printf("%d %d %d %d %d \n", x[0], x[1], x[2], x[3], x[4]);

    return 0;
}