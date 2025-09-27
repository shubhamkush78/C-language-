#include <stdio.h>

void pro() {
    printf("%d", y);
}

int main() {

    int y = 11;

    pro();
    
    return 0;
}


// C.c:4:18: error: 'y' undeclared (first use in this function)