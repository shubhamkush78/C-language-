#include <stdio.h>

int i = 0;

void pro() {
    printf("%d   ", i++);
    if(i < 3)
        pro();
}

int main() {
    pro();

    printf("Hogaya...");

    return 0;
}