#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
  //variable = value;   

    int a = 2;  // a:2  // constant

    int b = a;  // b:2  // variable

    int c = a + b; // c:4 // expression 

    int d = add(12, 13); // d: 25  // function call

    printf("a: %d\nb: %d\nc: %d\nd: %d", a, b, c, d);

    return 0;
}