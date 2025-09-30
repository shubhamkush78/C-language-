#include <stdio.h>

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n<=50) {
        printf("Enter a number: ");
        scanf("%d", &n);
    }

    printf("Entered number which is greater than 50 is : %d", n);

    return 0;
}