#include <stdio.h>

void pro(int n) {
    printf("%d ", n);

    if(n > 0)
        pro(n-1);
}

int main() {

    pro(3);

    return 0;
}