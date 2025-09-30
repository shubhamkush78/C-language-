#include <stdio.h>

int main() {

    int n;

    do {
        printf("Enter a number: ");
        scanf("%d", &n);
    } while(n >= 50);

    printf("The number entered, less than 50 is: %d", n);

    return 0;
}