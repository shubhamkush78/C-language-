#include <stdio.h>

int add(int a, int b) {
    int sum = 0;
    sum = a + b;
    return sum;
}

int main() {

    int x = add(15, 17);
    printf("%d", sum);

    return 0;
}



// B.c:12:18: error: 'sum' undeclared (first use in this function)