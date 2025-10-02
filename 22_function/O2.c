#include <stdio.h>

int i = 0;

void pro() {    
    if(i++ < 3)
        pro();
    
    printf("%d   ", i);
}

int main() {
    pro();

    printf("Hogaya...");

    return 0;
}