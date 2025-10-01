#include <stdio.h>

int main() {
    
    char x[15] = "ganesh kumar";

    int length = sizeof(x), i;

    for(i=0;i<length;i++)
        if(x[i] == '\0')
            break;

    printf("String %s length is %d", x, i);

    return 0;
}