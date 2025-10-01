#include <stdio.h>

int main() {

    int x[][2] = {1, 2, 3, 11, 22, 33};

    int i, j;

    int row_len = sizeof(x) / sizeof(x[0]);
    int col_len = sizeof(x[0]) / sizeof(int);

    for(i = 0; i < row_len; i++) {
        for(j = 0; j < col_len; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}