#include <stdio.h>

int main() {

    int x = 6.5; // Narrowing Conversion 
    // (truncation: the fractional part of the value is truncated at the time of assignment)

    printf("%d", x);

    return 0;
}