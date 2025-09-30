#include <stdio.h>

int main() {

    int n, row, col;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(row=0; row<n; row++) {
        for(col=0; col<n; col++) 
            printf("# ");
        
        printf("\n");
    }

    return 0;
}