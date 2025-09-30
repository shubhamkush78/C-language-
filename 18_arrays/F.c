#include <stdio.h>

int main() {    

    int x[5];

    printf("%d %d %d %d %d \n", x[0], x[1], x[2], x[3], x[4]);

    printf("Enter First number: ");
    scanf("%d", &x[0]);
    printf("Enter Second number: ");
    scanf("%d", &x[1]);
    printf("Enter Third number: ");
    scanf("%d", &x[2]);
    printf("Enter Fourth number: ");
    scanf("%d", &x[3]);
    printf("Enter Fifth number: ");
    scanf("%d", &x[4]);


    printf("%d %d %d %d %d \n", x[0], x[1], x[2], x[3], x[4]);

    return 0;
}