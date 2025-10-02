#include <stdio.h>

void pro(int n) {
    if(n > 0) {
        printf("%d ", n);
        pro(n-1);
    }
}

int main() {

    pro(3);

    return 0;
}