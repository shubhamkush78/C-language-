#include <stdio.h>


int main() {

    int n = 9;
    
    switch(2) {
        //case label can't be a string constant...
        case "A":
            printf("A");
    }

    return 0;
}


// F2.c:10:9: error: case label does not reduce to an integer constant
