#include <stdio.h>

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    //non negative interger expected...
    switch(n) {
        case 0:
        case 1:
        case 2:
            printf("A weak number..");
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            printf("A moderate number..");
            break;
        default:
            printf("A strong number..");
    }

    // if(n < 3)
    //     printf("A weak number");
    // else if(n < 7)
    //     printf("A moderate number");
    // else
    //     printf("A strong number");

    return 0;
}