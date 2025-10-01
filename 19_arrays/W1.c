#include <stdio.h> 
#include <string.h> 

int main() {    

    char x[15] = "mohan";
    char y[] = "ram";  

    int x_length = strlen(x);
    int y_length = strlen(y), i;

    printf("Before: %s", x);   // o/p : mohan

    for(i = 0; i < y_length; i++) {
        x[x_length+i] = y[i];
    }
   
    printf("\nAfter: %s", x);   // o/p : mohanram

    return 0;
}