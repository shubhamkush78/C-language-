#include <stdio.h>

int main() {

    int i, j;

    int x[] = {10, 20, 30, 40, 50, 60, 70};  

    int size = sizeof(x)/sizeof(x[0]);
    
    int y[size];

    for(i=0;i<size;i++) {
        printf("%d ", y[i]);
    }  

    for(i=0 ; i < size; i++) {
        y[i] = x[size-i-1];
    }

    printf("\n\n");

    for(i=0;i<size;i++) {
        printf("%d ", y[i]);
    }  

    return 0;
}