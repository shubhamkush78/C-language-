#include <stdio.h>

int main() {

    char x[15];

    printf("Enter your name: ");

    // regex format specifier: %[... ]
    scanf("%[A-Za-z ]", &x);

    printf("My Name is: %s", x);

    return 0;
}