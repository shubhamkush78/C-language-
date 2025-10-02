#include <stdio.h>

void pro(int y) {
    printf("%d", y);
}

int main() {

    pro(12, 45);

    return 0;
}


// L1.c:9:5: error: too many arguments to function 'pro'