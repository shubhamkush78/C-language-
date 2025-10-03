#include <stdio.h>

int main() {

    int x = 11, *p = &x;
    int y = 12, *q = &y;

    printf("pointer variable's addition: %d", p+q);

    return 0;
}


// I.c:8:48: error: invalid operands to binary + (have 'int *' and 'int *')