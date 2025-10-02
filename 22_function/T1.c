#include <stdio.h>

void print_abc(int n) { 
    if(n > 0) {
        printf("%c ", 65+n-1);
        print_abc(n-1);        
    }
}

int main() {

    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    print_abc(x);

    return 0;
}