#include <stdio.h>

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n%2 == 1) {
        printf("Enter a number-> ");
        scanf("%d", &n);
    }

    printf("The Even Number Entered: %d", n);

    return 0;
}