#include <stdio.h>

int main() {

    int x[10] = {10, 20, 30, 40, 50, 60, 70};
    int y = 99, index, i;

    int size = sizeof(x) / sizeof(int);

    printf("Enter a number(0-%d): ", size-1);
    scanf("%d", &index);

    for(i=0;i<size;i++) 
        printf("%d ", x[i]); 
    
    //---------------------------
    for(i=size-2;i>=index;i--) {
        x[i+1] = x[i];
    }

    x[index] = y;
    //---------------------------

    printf("\n\n");
    for(i=0;i<size;i++) 
        printf("%d ", x[i]); 

    return 0;
}