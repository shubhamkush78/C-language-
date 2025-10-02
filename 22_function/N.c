#include <stdio.h>

void pro() {
    printf("---\n");
    pro();
}

int main() {
    pro();

    printf("Hogaya...");

    return 0;
}