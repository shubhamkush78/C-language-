#include <stdio.h>

int main() {
    
    switch(99) {
        //case label can't be a variable expression...
        case printf("A"):
            printf("A");
            break;           
    }

    return 0;
}

// F5.c:7:9: error: case label does not reduce to an integer constant