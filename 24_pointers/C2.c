#include <stdio.h>

//void pointer
int main() {

    int x = 122;

    void *p = &x;

    // int *q = p;
    int *q = (int*)p;

    printf("%d", *q);  

    return 0;
}