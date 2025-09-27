#include <stdio.h>

// global variable : z
int z = 12;

void pro() {
    printf("inside pro: %d", z);
}

int main() {

    pro();

    printf("\ninside main: %d", z);

    return 0;
}