#include <stdio.h>

int main() { 

    // function local variable...
    int a = 12;      
    
    {         
        // local scoped variable ...
        int a = 91;
        printf("%d", a);
    }   

    printf("\n%d", a);

    return 0;
}


