#include <stdio.h>

int main() {
    
    char x[15] = "ganesh";

    int length = sizeof(x);

    int str_len = printf("%s", x); 

    printf("\nString %s length is %d", x, str_len);

    return 0;
}