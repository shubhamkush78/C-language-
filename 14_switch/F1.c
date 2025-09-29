#include <stdio.h>


int main() {

    int n = 9;
    
    switch(2) {
        //case label can't be a floating point constant...
        case 2.3:
            printf("A");
    }

    return 0;
}


// F1.c:10:9: error: case label does not reduce to an integer constant