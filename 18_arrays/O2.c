#include <stdio.h>

int main() {

    int x[12] = {31, 2, 78, 47, 89, 11, 2, 54, 72, 29, 2, 67}, i, size, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    size = sizeof(x)/sizeof(x[0]);

    for(i=0;i<size;i++) {
        if(x[i] == n) {
            printf("\nyes");
            break;
        }
    }
        
    return 0;
}