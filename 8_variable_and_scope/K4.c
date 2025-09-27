#include <stdio.h>

int a = 100; 

int main() { 
    
    {            
        int a = 9;
        int a = 12;
    }   

    return 0;
}


// K4.c:9:13: error: redefinition of 'a'