#include <stdio.h>

int main() {
    
    switch(99) {
        //case label can't be a variable expression...
        case 'a'+1:
            printf("AAAAAA");
            break;        
        case 'b'+1:
            printf("BBBBB");
        
    }

    return 0;
}