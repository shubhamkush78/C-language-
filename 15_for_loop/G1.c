#include <stdio.h>

int main() {

    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=10; i>=1; i--) {
        printf("%d\n", n*i);
    }

    return 0;
}