#include <stdio.h>

int main() {

    int i, n, mult=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=n;i>0;i--) {
        mult *= i;  //mult = mult * i
    }

    printf("multiplication of first %d numbers: %d", n, mult);

    return 0;
}