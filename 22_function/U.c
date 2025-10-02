#include <stdio.h>

int i;

void print_star(int n) {
    int j;
    if(n > 0) {
        for(j = 0; j < i; j++)
            printf("* ");
        
        printf("\n");
        print_star(n-1);
    }
}

int main() {

    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    i = x;

    print_star(x);

    return 0;
}