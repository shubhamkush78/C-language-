#include <stdio.h> 
#include <string.h> 

int main() {    

    char x[15] = "mohan";
    char y[] = "om";  
    int i = 0;

    printf("Before: %s", x);   // o/p : mohan

    while(x[i++] = y[i]);
   
    printf("\nAfter: %s", x);   // o/p : ram

    return 0;
}