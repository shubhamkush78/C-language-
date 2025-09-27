#include <stdio.h>

int main() {
    int x;
    char y;

    printf("Enter a number: ");
    scanf("%d", &x);

    fflush(stdin);
    
    printf("Enter a character: ");
    scanf("%c", &y);


    printf("The value entered: %d and %cHello", x, y);
    

    return 0;
}