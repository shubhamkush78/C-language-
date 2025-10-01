#include <stdio.h>

int main() {

    int x[3];

    x = {1, 2, 3};

    printf("%d ", x[0]);
    printf("%d ", x[1]);
    printf("%d ", x[2]);

    return 0;
}



// J4.c:7:9: error: expected expression before '{' token