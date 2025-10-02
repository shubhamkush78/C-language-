#include <stdio.h>

void a1() {
    printf("T");
}

void a2() {
    printf("B");
    a1();
    printf("M");
}

void a3() {
    printf("O");
    a2();
    printf("A");
}

int main() {
    printf("K");
    a3();
    printf("U");

    return 0;
}