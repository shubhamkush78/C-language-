#include <stdio.h>

int main() {

    int i;

    int x[] = {10, 20, 30, 40, 50, 60};  

    int size = sizeof(x)/sizeof(x[0]);
    
    int y[size];

    for(i=0;i<size;i++) {
        printf("%d ", y[i]);
    }   

    for(i=0; i<size; i++) {
        y[i] = x[i];
    }

    printf("\n\n");

    for(i = 0; i < size; i++) {
        printf("%d ", y[i]);
    } 

    return 0;
}