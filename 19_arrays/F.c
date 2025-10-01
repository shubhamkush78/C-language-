#include <stdio.h>

int main() {

    int x[4][5] = {{5,4,3,2,1},{10,9,8,7,6},{15,14,13,12,11},{20,19,18,17,16}};
    int twoD_length, oneD_length, i, j;

    twoD_length = sizeof(x) / sizeof(x[0]);
    oneD_length = sizeof(x[0]) / sizeof(int);

    for(i = 0; i < twoD_length; i++) {
        for(j = 0; j < oneD_length; j++) {
            printf("%d  ", x[i][j]);
        }
        printf("\n--------------\n");
    }

    return 0;
}