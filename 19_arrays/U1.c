#include <stdio.h>

int main() {
    
    char x[] = "ram"; 
    // char y[] = "ram"; 
    char y[] = "rim";

    int i = 0, flag = 1;

    while(x[i] != '\0' && y[i] != '\0') {
        if(x[i] != y[i]) {
            flag = 0;
            break;
        }
        i++;
    }   

    printf("REsult: %s", flag ? "same" : "not same"); 
    
    return 0;
}