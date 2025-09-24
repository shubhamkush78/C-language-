#include <stdio.h>

int main() {    
    int x;

    for(x=-128;x<128;x++) {
        printf("%c-%d\t", x, x);
    }

    return 0;
}