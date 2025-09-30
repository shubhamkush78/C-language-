#include <stdio.h>

int main() {

    int i, n;

    printf("How many even numbers you want to print: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", i*2);
    }

    return 0;
}