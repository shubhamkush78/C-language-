#include <stdio.h>

void print_star(int n) {    
    if(n>0) {
        printf("* ");
        print_star(n-1);
    }
}

int main() {

    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    print_star(x);

    return 0;
}