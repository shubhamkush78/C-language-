#include <stdio.h>

int main() {

    int i, n;

    printf("How many odd numbers you want to print: ");
    scanf("%d", &n);

    for(i = n*2; i >= 2; i = i-2) {
        printf("%d ", i-1);
    }

    return 0;
}