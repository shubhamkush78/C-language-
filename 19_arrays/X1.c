#include <stdio.h>
#include <string.h>

int main() {
    
    char x[] = "om is a good boy";

    int i = 0;

    printf("Before: %s", x);  // o/p: mohan is a good boy

    while(x[i] >= 97 && x[i] <= 122 ? x[i++] = x[i]-32 : x[i++]);

    printf("\n\nAfter: %s", x); // o/p: MOHAN IS A GOOD BOY
    
    return 0;
}