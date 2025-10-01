#include <stdio.h>
#include <string.h>

int main() {
    
    char x[] = "om"; 
    // char y[] = "oman";
    char y[] = "om";
    int i = 0, flag = 0;

    while(x[i]!='\0'&&y[i]!='\0'&&x[i++]==y[i]);
        
    if(x[i]=='\0'&&y[i]=='\0')
        flag = 1;

    printf("REsult: %s -> %d", flag ? "Same" : "NOt Same", flag); 
    
    return 0;
}