#include <stdio.h>

int main() { 

    {
       {
            {
                int a = 88;                
            }

            printf("%d", a);
       }
    }    
    
    return 0;
}


// N2.c:11:26: error: 'a' undeclared (first use in this function)

