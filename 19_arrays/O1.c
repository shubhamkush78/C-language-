#include <stdio.h>

char x[30];

int main() {

    int i;

    for(i=0;i<30;i++) 
        printf("-%c-%d-\n", x[i], x[i]);

    return 0;
}