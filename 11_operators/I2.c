#include <stdio.h>

int main() {

    int a = 5, b = 11, c;

    printf("%d %d %d", b, ++c, c=a+b++);

    return 0;
}