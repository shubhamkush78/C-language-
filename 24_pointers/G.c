#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int subt(int x, int y) {
    return x - y;
}

int main() {

    int n, a, b;
    int (*p)();

    printf("Enter 1 for addition or 2 for subtraction: ");
    scanf("%d", &n);

    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);

    switch(n) {
        case 1:
            p = &add;
            break;
        case 2:
            p = &subt;
            break;
        default: 
            printf("\nSorry We can't help you with the calculation...");
    }

    int res = (*p)(a, b);

    printf("\nThe Result is: %d", res);
    
    return 0;
}