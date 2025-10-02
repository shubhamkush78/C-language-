#include <stdio.h>

int add(int x, int y) {
    int sum = 0;
    sum = x + y;
    return sum;
}

int main() {

    int a, b, result;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    // result = add(a, b);
    result = add(b, a);

    printf("\n\nAddition of %d and %d is %d", a, b, result);

    return 0;
}