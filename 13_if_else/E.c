#include <stdio.h>

int main() {

    int x, y, z;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &x, &y, &z);

    if(x > y && x > z) {
        printf("x: %d is the largest number...", x);
    } else if (y > z) {
        printf("y: %d is the largest number...", y);
    } else {
        printf("z: %d is the largest number...", z);
    }

    return 0;
}