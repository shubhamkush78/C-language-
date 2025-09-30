#include <stdio.h>

int main() {

    int i, j, n;
    char A = 'A';

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
            printf("-%c- ", A);

        A++;
        printf("\n");
    }


    return 0;
}