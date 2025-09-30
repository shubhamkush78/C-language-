#include <stdio.h>

int main() {

    int i, j, n, x;

    printf("Enter a number: ");
    scanf("%d", &n);

    x = n * n;

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
            printf("%d ", x--);

        printf("\n");
    }


    return 0;
}