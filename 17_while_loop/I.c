#include <stdio.h>

int main() {

    int i, n, x;

    printf("How many odd numbers you want to enter: ");
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        printf("\nEnter next odd number: ");
        scanf("%d", &x);

        if(x%2==0)
            break;

        printf("The next odd number is: %d", x);
    }

    printf("The even number caused loop termination is: %d", x);

    return 0;
}