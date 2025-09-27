#include <stdio.h>

int main() { 

    int a = b = c = 23;

    printf("%d", a);
    printf("\n%d", b);
    printf("\n%d", c);
    
    return 0;
}


// Q.c: In function 'main':
// Q.c:5:13: error: 'b' undeclared (first use in this function)
// Q.c:5:13: note: each undeclared identifier is reported only once for each function it appears in
// Q.c:5:17: error: 'c' undeclared (first use in this function)
