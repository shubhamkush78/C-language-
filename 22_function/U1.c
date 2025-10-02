#include <stdio.h>

int i;

void print_star(int w) {
    if(w > 0){
        printf("# ");
        print_star(w-1);           
    } 
}

void print_line(int n) {
    if(n > 0) {
        print_star(i);
        
        printf("\n");
        print_line(n-1);
    }
}

int main() {

    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    i = x;

    print_line(x);

    return 0;
}