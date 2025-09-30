#include <stdio.h>

int main() {

    int i=1, j, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i<=n) {
        j = 1;
        while(j++<=i) {
            printf("$ ");
        }
        printf("\n");
        i++;
    }

    return 0;
}