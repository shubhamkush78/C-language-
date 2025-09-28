#include <stdio.h>

int main() {

    int x;

    // Case 1:
    // x = printf("ram") < printf("om") 
    //             && printf("vijyant") > printf("golu") 
    //                     || printf("mohan") < printf("vikrant");

    // Case 2:
    x = printf("ram") > printf("om") 
                && printf("vijyant") > printf("golu") 
                        || printf("mohan") < printf("vikrant");

    printf("%d", x);

    return 0;
}