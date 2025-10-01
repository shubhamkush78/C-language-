#include <stdio.h>

int main() {

    int x[10] = {10, 20, 30, 40, 50, 60, 70};
    int y[] = {1,2,3}, index, i, j=0;

    int x_size = sizeof(x) / sizeof(int);
    int y_size = sizeof(y) / sizeof(int);

    printf("Enter a number(0-%d): ", x_size-1);
    scanf("%d", &index);

    for(i=0;i<x_size;i++) 
        printf("%d ", x[i]); 
    
    //---------------------------
    for(i=x_size-y_size-1; i>=index; i--)
        x[i+y_size] = x[i];

    for(i=index; i < index+y_size; i++)
        x[i] = y[j++]; 
    //---------------------------

    printf("\n\n");
    for(i=0;i<x_size;i++) 
        printf("%d ", x[i]); 

    return 0;
}