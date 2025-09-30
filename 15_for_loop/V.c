#include <stdio.h>

int main() {

    int i, n, mult=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++) {
        mult *= i;  //mult = mult * i
    }

    printf("multiplication of first %d numbers: %d", n, mult);

    return 0;
}