#include <stdio.h>

int main() {

    int i, n;

    printf("How many odd numbers you want to print: ");
    scanf("%d", &n);

    for(i = n; i > 0; i--) {
        printf("%d ", i*2-1);
    }

    return 0;
}