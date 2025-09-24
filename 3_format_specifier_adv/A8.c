#include <stdio.h>

int main() {    
    int x;

    for(x=0;x<256;x++) {
        printf("%c-%d\t", x, x);
    }

    return 0;
}