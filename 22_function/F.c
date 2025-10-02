#include <stdio.h>

int string_length(char y[]) {
    int i = 0;

    while(y[i++]);

    return --i;
}

int main() {

    char x[15] = "jagdeesh";

    int len = string_length(x);
    
    printf("\n\nString Length: %d", len);

    return 0;
}