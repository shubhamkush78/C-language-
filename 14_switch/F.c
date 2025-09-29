#include <stdio.h>


int main() {

    int n = 9;
    
    switch(2) {
        //case label can't be a variable...
        case n:
            printf("A");
    }

    return 0;
}



// F.c:9:9: error: case label does not reduce to an integer constant
