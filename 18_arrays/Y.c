#include <stdio.h>

int x[2][3];

int main() {    

    printf("%d ", x[0][0]);
    printf("%d ", x[0][1]);
    printf("%d ", x[0][2]);
    printf("\n~~~~~~~~~~~\n");
    printf("%d ", x[1][0]);
    printf("%d ", x[1][1]);
    printf("%d ", x[1][2]);

    return 0;
}