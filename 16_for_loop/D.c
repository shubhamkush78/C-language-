#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    char start = 'A' + n * n - 1;

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%c ", start--);
        }
        printf("\n");
    }

    return 0;
}