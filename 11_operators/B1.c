#include <stdio.h>

int main() {

    int a = 89;
    // int b = 56;
    int b = 89;

    printf("%d <= %d = %d", a, b, a <= b);  
    // a is less than or equal to b
    // 89 is less than or equal to 56
    printf("\n%d >= %d = %d", a, b, a >= b);

    return 0;
}