#include <stdio.h>

int main() {

    int x, n, i, count=0;

    printf("How many numbers you want to enter: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("\nEnter a number: ");
        scanf("%d", &x);

        if(x%2 == 0) {
            printf("%d ", x);
        } else {
            count++;
        }        
    }

    printf("\nodd count: %d", count);

    return 0;
}