#include <stdio.h>

int main() {

    int i, n, start;

    printf("Enter start value: ");
    scanf("%d", &start);

    printf("Enter number of outputs: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("%d ", start-i);
    }

    return 0;
}