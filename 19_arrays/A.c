#include <stdio.h>

int main() {

    short x[2][3];

    printf("%u ", &x[0][0]);
    printf("%u ", &x[0][1]);
    printf("%u ", &x[0][2]);
    printf("\n~~~~~~~~~~~~\n");
    printf("%u ", &x[1][0]);
    printf("%u ", &x[1][1]);
    printf("%u ", &x[1][2]);

    return 0;
}