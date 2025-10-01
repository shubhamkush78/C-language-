#include <stdio.h>
#include <string.h>

int main() {
    
    char x[15] = "ram"; 

    int i = 0;

    while(x[i++]);

    printf("\nLength of array x is %d and length of String %s is %d", sizeof(x), x, i-1);

    return 0;
}