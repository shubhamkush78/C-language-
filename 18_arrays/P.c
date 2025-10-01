#include <stdio.h>

int main() {

    int x[] = {31, 2, 78, 47, 89, 11, 2, 54, 72, 29, 2, 67, 11, 2, 31, 11}, i, size, n, count=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    size = sizeof(x)/sizeof(x[0]);

    for( i=0; i<size; i++) {
        if(x[i] == n)
            count++;
    }    

    printf("Count of %d is %d", n, count);
        
    return 0;
}