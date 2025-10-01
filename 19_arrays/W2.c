#include <stdio.h> 
#include <string.h> 

int main() {    

    char x[15] = "mohan";
    char y[] = "ram";  

    int x_length = strlen(x);
    int y_length = strlen(y), i, j=0;

    printf("Before: %s", x);   // o/p : mohan

    for(i = x_length; i < x_length+y_length; i++) {
        x[i] = y[j++];
    }
   
    printf("\nAfter: %s", x);   // o/p : mohanram

    return 0;
}