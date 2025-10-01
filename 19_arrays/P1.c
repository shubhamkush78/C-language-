#include <stdio.h>

int main() {
    char x[30] = {'A', 'g', '_', '\n', '5', ' ', '~'};
    int i;

    int length = sizeof(x)/sizeof(char);

    for(i=0;i<length;i++) 
        printf("#%c#%d#\n", x[i], x[i]);

    return 0;
}