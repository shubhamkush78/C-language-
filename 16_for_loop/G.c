#include <stdio.h>

int main() {
        
    int j, i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=n; i>=1; i--) {
        for(j=0; j<n; j++) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}