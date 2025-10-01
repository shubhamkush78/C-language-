#include <stdio.h>

int main() {

    int x[4][5] = {{1, 2, 3, 4, 5}, {11, 22, 33, 44, 55}, {10, 20, 30, 40, 50}, {5, 10, 15, 20, 25}};

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