#include <stdio.h>

int main() {        

    // anonymous code block : creates a local scope
    { 
        // local scoped variable...
        int a = 91;
        printf("\n%d", a);
    }   

    return 0;
}