#include <stdio.h>
#include <stdlib.h>

int* add(int a, int b) {
    // int sum = 0;
    int *sum = (int*)malloc(sizeof(int));
    *sum = a + b;
    return sum;
}

int main() {

    int x, y;

    printf("Enter 2 number: ");
    scanf("%d%d", &x, &y);

    int *res = add(x, y);

    printf("\n\nThe Result: %d", *res);

    return 0;
}