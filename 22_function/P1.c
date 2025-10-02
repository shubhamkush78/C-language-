#include <stdio.h>

void pro(int n) {
    if(n > 0)
        pro(n-1);

    printf("%d ", n);
}

int main() {

    pro(3);

    return 0;
}