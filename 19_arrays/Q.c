#include <stdio.h>

int main() {
    char x[10] = "mohan";
    int i;

    int length = sizeof(x)/sizeof(char);

    for(i=0;i<length;i++) 
        printf("#%c#%d#\n", x[i], x[i]);

    return 0;
}