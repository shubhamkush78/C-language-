#include <stdio.h>

//void pointer
int main() {

    int x = 98;

    void *p = &x;

    printf("%d", *(int*)p);  

    return 0;
}