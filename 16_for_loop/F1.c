#include <stdio.h>

int main() {
        
    int j, i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%d ", i+1);
        }

        printf("\n");
    }

    return 0;
}