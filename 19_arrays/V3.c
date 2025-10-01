#include <stdio.h> 
#include <string.h> 

int main() {    

    char x[15] = "mohan";
    char y[] = "ram";  

    printf("Before: %s", x);   // o/p : mohan

    strcpy(x, y);
   
    printf("\nAfter: %s", x);   // o/p : ram

    return 0;
}