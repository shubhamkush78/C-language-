#include <stdio.h>

//void pointer
int main() {

    int x = 98;

    void *p = &x;

    printf("%d", *p);  

    return 0;
}


// C.c:10:18: warning: dereferencing 'void *' pointer [enabled by default]
// C.c:10:5: error: invalid use of void expression