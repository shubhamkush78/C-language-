#include <stdio.h>

int main() {

    int i, j, n;
    char x = 'A';

    printf("Enter a number: ");
    scanf("%d", &n);
   
    for(j=1;j<=n*n;j++) {
        printf("-%c- ", x);

        if(x >= 65)
            x -= 16;
        else
            x += 17;

        if(j%n == 0)
            printf("\n");
    }

    return 0;
}