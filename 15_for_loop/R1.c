#include <stdio.h>

int main() {

    int i, n;

    printf("How many even numbers you want to print: ");
    scanf("%d", &n);

    for(i = 2; i <= n*2; i = i+2) {
        printf("%d ", i-1);
    }

    return 0;
}