#include <stdio.h>

int main() {

    int i, j, n;
    char x = 'A';
    int y = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
   
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if((i+j)%2 == 0) 
                printf("~%c~ ", x++);
            else
                printf("~%d~ ", y++);
        }

        printf("\n");
    }
    

    return 0;
}