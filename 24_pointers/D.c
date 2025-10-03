#include <stdio.h>

//void pointer
int main() {

    int x = 122;

    void *p = &x;

    printf("%d", *(int*)p);

    float j = 3.45f;

    p = &j;

    printf("\n\n%f", *(float*)p);  

    return 0;
}