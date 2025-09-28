#include <stdio.h>

int main() {

    int x,y;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &x, &y);

    if(x > y) {
        printf("x: %d is the greater number: ", x);
    } else {
        printf("y: %d is the greater number: ", y);
    }

    return 0;
}