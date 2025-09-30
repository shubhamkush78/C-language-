#include <stdio.h>

int main() {

    int i, n, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=n; i>0; i--) {
        sum = sum + i;
    }

    printf("%d", sum);

    return 0;
}
