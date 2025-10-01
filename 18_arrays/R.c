#include <stdio.h>

int main() {

    int i, j;

    int x[] = {10, 20, 30, 40, 50, 60};  

    int size = sizeof(x)/sizeof(x[0]);
    
    int y[size];

    for(i=0;i<size;i++) {
        printf("%d ", y[i]);
    }  

    for(i=size-1,j=0 ; j < size; j++, i--) {
        y[j] = x[i];
    }

    printf("\n\n");

    for(i=0;i<size;i++) {
        printf("%d ", y[i]);
    }  

    return 0;
}