#include <stdio.h>

int main() {

    int a = 19;
    int b = 3;

    float c = (float)a/b;

    // type-casting operator to force convert the operand type :
    // int variable a will be converted to float, as we type casted 
    // the variable...

    printf("%f", c);

    return 0;
}