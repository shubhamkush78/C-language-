#include <stdio.h>

int main() {

    int x[] = {10, 20, 30, 40, 50};
    
    int i;

    int *p = x;

    for(i=0; i<5; i++) {
        // printf("%d ", x[i]);
        printf("-%d- ", *(p+i));
    }

    return 0;
}

