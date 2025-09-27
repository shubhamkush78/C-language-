#include <stdio.h>

//function local variables (helper variables): a, b and sum
int add(int a, int b) {
    int sum = 0;
    sum = a + b;
    return sum;
}

int main() {

    //function local variables (helper variables): x
    int x = add(12, 13);

    printf("The result is: %d", x);

    return 0;
}

