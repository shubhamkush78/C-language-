#include <stdio.h>

int main() {

    int i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i='A'+n-1;i>='A';i--) {
        printf("%c ", i);
    }

    return 0;
}