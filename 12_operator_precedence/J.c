#include <stdio.h>

int main() {

    int x;

    // x = printf("ABC") > printf("DE") && printf("FGH") > printf("IJ");
    x = printf("ABC") < printf("DE") && printf("FGH") > printf("IJ");

    printf("%d", x);

    return 0;
}