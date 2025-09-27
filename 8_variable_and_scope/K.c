#include <stdio.h>

int main() {       
    
    {         
        int a = 91;
        printf("\n%d", a);
    }   

    printf("\n%d", a);

    return 0;
}


// K.c:10:20: error: 'a' undeclared (first use in this function)