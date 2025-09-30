#include <stdio.h>

int main() {

    int i, n;
    char m = 'A';

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        printf("%c ", m);

        if(m < 97) 
            m = m + 33;
        else 
            m = m - 31;
    }

    return 0;
}