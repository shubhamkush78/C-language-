#include <stdio.h>

int main() {

    int x, n, i, count=0;

    printf("How many numbers you want to enter: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        printf("\nEnter a number: ");
        scanf("%d", &x);

        if(x%2 == 1) {
            count++;
            continue;
        } 
            
        printf("The Next Even Number: %d", x);      
    }

    printf("\nodd count: %d", count);

    return 0;
}