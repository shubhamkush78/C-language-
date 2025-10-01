#include <stdio.h>
#include <string.h>

int main() {
    
    char x[] = "mohan is a good boy";

    int a = 0, i, length = strlen(x);

    printf("Before: %s", x);  // o/p: mohan is a good boy

    for(i = 0; i < length; i++) {
        if(x[i] != ' ') {
            x[i] = x[i]-32;
        } else {
            x[i] = ' ';
        }
    }

    printf("\n\nAfter: %s", x); // o/p: MOHAN IS A GOOD BOY
    
    return 0;
}