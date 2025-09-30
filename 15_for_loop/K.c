#include <stdio.h>

int main() {

    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=n;i>0;i--) {
        printf("%c ", 'A' + i - 1);
    }

    return 0;
}