#include <stdio.h>

int main() {
    char a = 'A';
    short b = 78;
    
    int x = sizeof(a + b);

    printf("%d", x);

    return 0;
}