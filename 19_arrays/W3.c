#include <stdio.h> 
#include <string.h> 

int main() {    

    char x[15] = "mohan";
    char y[] = "ram";  

    printf("Before: %s", x);   // o/p : mohan

    strcat(x, y);
   
    printf("\nAfter: %s", x);   // o/p : mohanram

    return 0;
}