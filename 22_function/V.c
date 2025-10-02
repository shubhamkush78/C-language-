#include <stdio.h>

void print_next_line(int n) {
    if(n > 0) {
        print_next_line(n-1);
        int j;
        for(j=0;j<n;j++) {
            printf("# ");
        }
        printf("\n"); 
    }
}

int main() {

    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    print_next_line(x);    
    
    return 0;
}