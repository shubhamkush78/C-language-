#include <stdio.h>

int main() {

    int a = 65, i, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n*n; i++) {
        printf("%d ", i);

        if(i % n == 0)
            printf("\n");
    }

    return 0;
}