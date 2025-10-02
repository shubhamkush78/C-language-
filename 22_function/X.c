#include <stdio.h>

int fact(int n) {
    if(n == 0)
        return 1;
    
    return n * fact(n-1);
}

int main() {

    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    int res = fact(x);

    printf("Factorial of %d is: %d", x, res);

    return 0;
}