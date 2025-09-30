#include <stdio.h>

int main() {
    int i=0,n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i++ < n) {
        printf("# ");
    }

    return 0;
}