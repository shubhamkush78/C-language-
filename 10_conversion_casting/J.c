#include <stdio.h>

int main() {

    printf("%d", sizeof('A'+56L+2.3+7.8L));

    // All the involved operands are converted to the highest-type-value, 
    // to evaliate the expression ...

    // all the operands will be converted to long double as the 
    // long double is the highest type value in the above expression...
    // auto conversion...   

    return 0;
}