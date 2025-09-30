#include <stdio.h>

int main() {

    int i, n;
    char A = 'A', a = 'a';

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++) {
        if(i%2==1) 
            printf("%c ", A);
        else 
            printf("%c ", a);

        A++; a++;
    }

    return 0;
}