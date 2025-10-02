#include <stdio.h>

int subt(int x, int y) {
    int res = 0;
    res = x - y;
    return res;
}

int main() {

    int a, b, result;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    // result = subt(a, b);
    result = subt(b, a);

    printf("\n\nAddition of %d and %d is %d", a, b, result);

    return 0;
}