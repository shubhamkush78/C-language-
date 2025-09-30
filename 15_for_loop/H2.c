#include <stdio.h>

int main() {

    int i, n, start;

    printf("Enter start value: ");
    scanf("%d", &start);

    printf("Enter number of outputs: ");
    scanf("%d", &n);

    for(i = start; i < start+n; i++) {
        printf("%d#", i);
    }

    return 0;
}