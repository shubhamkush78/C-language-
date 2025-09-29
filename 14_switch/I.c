#include <stdio.h>

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 3)
        printf("A weak number");
    else if(n < 7)
        printf("A moderate number");
    else
        printf("A strong number");

    return 0;
}