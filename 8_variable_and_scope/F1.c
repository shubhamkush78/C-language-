#include <stdio.h>

void pro() {
    printf("%d", x);
}

int main() {

    pro();

    printf("%d", x);

    return 0;
}

int x = 90;




// F.c:4:18: error: 'x' undeclared (first use in this function)