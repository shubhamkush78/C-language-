#include <stdio.h>

int main() {

    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 'A'; i < 'A' + n; i++) {
        printf("%c ", i);
    }

    return 0;
}