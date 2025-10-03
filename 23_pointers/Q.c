#include <stdio.h>

int main() {

    int x[] = {10, 20, 30, 40, 50};
    
    int *p = &x[1];
    int *q = &x[3];

    printf("q-p: %d", q-p);

    return 0;
}

