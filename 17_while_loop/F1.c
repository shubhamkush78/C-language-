#include <stdio.h>

int main() {

    int n;

    do {
        printf("Enter a number: ");
        scanf("%d", &n);
    } while(n % 2);

    printf("The even number entered: %d", n);

    return 0;
}