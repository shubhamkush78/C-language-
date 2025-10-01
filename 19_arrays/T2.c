#include <stdio.h>
#include <string.h>

int main() {
    
    char x[15] = "vikramaditya"; 

    int str_len = strlen(x);

    printf("\nLength of array x is %d and length of String %s is %d", sizeof(x), x, str_len);

    return 0;
}