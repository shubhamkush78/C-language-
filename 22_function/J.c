#include <stdio.h>

int[] pro() {
    int x[] = {12, 13, 14};

    return x;
}

int main() {

    int y[] = pro();


    return 0;
}



// J.c:3:4: error: expected identifier or '(' before '[' token
// J.c: In function 'main':
// J.c:11:5: error: invalid initializer
