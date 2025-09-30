#include <stdio.h>

int main() {

    int i, n;
    char start;

    printf("Enter the start character(A-Z): ");
    scanf("%c", &start);

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = n; i > 0; i--) {
        printf("%c ", start--);
    }

    
    return 0;
}