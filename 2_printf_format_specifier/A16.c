#include <stdio.h>

int main() {

    printf("%s\n", "ganesh");
    printf("%*.*s\n", 40, 2, "ganesh");
    printf("%*.*s", -40, 2, "ganesh");
    printf("Hi");

    return 0;
}