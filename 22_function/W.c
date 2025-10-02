#include <stdio.h>

void print_next_star(int n) {
    if(n > 0) {
        print_next_star(n-1);
        printf("# ");
    }
}

void print_next_line(int n) {
    if(n > 0) {
        print_next_star(n);
        printf("\n"); 
        print_next_line(n-1);        
    }
}

int main() {

    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    print_next_line(x);    
    
    return 0;
}