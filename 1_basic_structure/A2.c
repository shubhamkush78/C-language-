#include <stdio.h>

//add : function definition
// int a, int b : parameter variables
void add(int a, int b) {
    int sum = 0; // variable declaration cum initialization
    sum = a + b;
    printf("%d", sum);
}

//function definition
int main() { 
    //function call
    // 7, 5 : function arguments
    add(7, 5);  //function call
    //user defined function

    return 0;
}


// screenshots 28,29.png