#include <stdio.h>

int main() {

    int i, j, n;
    char x = 'A';

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%c ", x);

            if(x >= 65)
                x -= 16;
            else
                x += 17;
        }

        printf("\n");
    }

    return 0;
}