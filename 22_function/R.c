#include <stdio.h>

int sum(int n) {
    if(n==1)
        return 1;
    else
        return n + sum(n-1);
}

int main() {

    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    int res = sum(x);

    printf("Sum of first %d numbers is : %d", x, res);

    return 0;
}