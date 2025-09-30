#include <stdio.h>

int main() {

    int i, n;

    printf("How many even numbers you want to print: ");
    scanf("%d", &n);

    for(i = n; i > 0; i--) {
        printf("%d ", i*2);
    }

    return 0;
}