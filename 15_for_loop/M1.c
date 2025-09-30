#include <stdio.h>

int main() {

    int i, n;
    char start;

    printf("Enter the start character(A-Z): ");
    scanf("%c", &start);

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("%c ", start-i);
    }

    
    return 0;
}