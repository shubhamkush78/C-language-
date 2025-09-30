#include <stdio.h>

int main() {

    int x[10] = {31, 78, 47, 89, 11, 2, 54, 72, 29, 67}, i, size, sum=0;

    size = sizeof(x)/sizeof(x[0]);

    for(i=0 ; i<size; i++) {
        if(x[i]%2 == 1) {
            sum = sum + x[i];
        }
    }

    printf("Sum: %d", sum);
    
    return 0;
}