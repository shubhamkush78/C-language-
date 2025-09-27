#include <stdio.h>

int main() { 

    // function scoped variable/function local variables
    int a = 999;

    {
       {
            {
                printf("%d", a);
            }
       }
    }    
    
    return 0;
}


