#include <stdio.h>


int main() {

    int n = 9;
    
    switch(2) {
        //case label can't be a variable expression...
        case n+1:
            printf("A");
    }

    return 0;
}


// F3.c:10:9: error: case label does not reduce to an integer constant