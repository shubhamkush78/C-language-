#include <stdio.h>

void pro(int y) {
    y = 999;
}

int main() {

    int x = 55;

    printf("%d\n\n", x);
    
    pro(x); 

    printf("%d", x);


    return 0;
}