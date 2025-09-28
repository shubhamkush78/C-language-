#include <stdio.h>

int main() {

    int x, y, z;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &x, &y, &z);

    printf("%d", x > y && x > z ? x : y > z ? y : z);

    return 0;
}