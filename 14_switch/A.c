// inputs: 1, 2, 3 or 7

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number(1, 2 or 3): ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("A");
            break;
        case 2:
            printf("B");
            break;
        case 3:
            printf("C");
            break;
    }

    printf("\n-------------");

    return 0;
}