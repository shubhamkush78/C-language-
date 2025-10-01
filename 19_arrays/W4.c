#include <stdio.h> 
#include <string.h> 

int main() {    

    char x[15] = "ram";
    char y[] = "om";  

    int i = 0, j = 0;

    printf("Before: %s", x);   // o/p : mohan

    while(x[i++]);

    i--;

    while(x[i++]=y[j++]);
   
    printf("\nAfter: %s", x);   // o/p : mohanram

    return 0;
}