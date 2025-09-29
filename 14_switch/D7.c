#include <stdio.h>

void add(int a, int b) {
    printf("%d", a+b);
}

int main() {

    // argument to switch : void return type function call
    switch(add(12, 34)) {
        
    }

    return 0;
}


// D7.c:10:12: error: switch quantity not an integer