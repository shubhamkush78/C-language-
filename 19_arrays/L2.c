#include <stdio.h>

int main() {

    int x[2][3] = {{1, 2, 3}, {11, 22, 33}};

    int i, j;

    int row_len = sizeof(x) / sizeof(x[0]);
    int col_len = sizeof(x[0]) / sizeof(int);

    for(i = row_len-1; i >= 0; i--) {
        for(j = col_len-1; j >= 0; j--) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}