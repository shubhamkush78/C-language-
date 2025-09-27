#include <stdio.h>

// global scoped variable
int a = 100; 


int main() { 

    // function scoped variable
    int a = 9;

    {
        // local/blocked scope variable
        int a = 7;
    }    
    
    return 0;
}


