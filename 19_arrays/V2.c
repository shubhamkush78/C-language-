#include <stdio.h> 
#include <string.h> 

int main() {    

    char x[15] = "mohan";
    char y[] = "ram";

    int a = 0, i, x_length = strlen(x), y_length = strlen(y);

    printf("Before: %s", x);   // o/p : mohan

    for(i=0; i<x_length; i++) {
        if(y[i] != '\0') {
            x[i] = y[i];
        } else {
            x[i] = '\0';
        }
    }

    printf("\nAfter: %s", x);   // o/p : ram

    return 0;
}