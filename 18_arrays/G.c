#include <stdio.h>

int main() {    

    int x[5], i;
    int size;

    printf("%d %d %d %d %d \n", x[0], x[1], x[2], x[3], x[4]);

    size = sizeof(x) / sizeof(x[0]);

    for(i=0; i<size; i++) {
        printf("Enter %dth number: ", i+1);
        scanf("%d", &x[i]);
    }

    printf("%d %d %d %d %d \n", x[0], x[1], x[2], x[3], x[4]);

    return 0;
}