#include <stdio.h>

int main() {

    int x = 11, *p = &x;
    int y = 12, *q = &y;
    
    printf("pointer variable's multiplication: %d", p*q);

    return 0;
}


// I2.c:8:54: error: invalid operands to binary * (have 'int *' and 'int *')