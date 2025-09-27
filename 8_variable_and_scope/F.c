#include <stdio.h>

void pro() {
    printf("%d", x);
}

int x = 90;

int main() {

    pro();

    return 0;
}


// F.c:4:18: error: 'x' undeclared (first use in this function)