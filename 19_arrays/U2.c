#include <stdio.h>
#include <string.h>

int main() {
    
    char x[] = "ram";  
    // char y[] = "raman";
    char y[] = "ram";

    int i = 0, flag = 1;

    int a = strlen(x);
    int b = strlen(y);

    if(a == b) {
        while(x[i] != '\0' && y[i] != '\0') {
            if(x[i] != y[i]) {
                flag = 0;
                break;
            }
            i++;
        } 
    } else {
        flag = 0;
    }
      

    printf("REsult: %s", flag ? "same" : "not same"); 
    
    return 0;
}