#include <stdio.h>

int main() {

    char x[15] = "mohan";

    char y[] = "ram";

    printf("Before: %s", x);   // o/p : mohan

    x = y;

    printf("After: %s", x);   // o/p : ram

    return 0;
}


// V.c:11:7: error: incompatible types when assigning to type 'char[15]' from type 'char *'