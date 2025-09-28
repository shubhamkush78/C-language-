#include <stdio.h>

int main() {

    char x;

    printf("Boil water...");

    printf("\nsugar?(y/n): ");
    scanf("%c", &x);

    if(x == 'y') {
        printf("\nadd sugar");
    }

    printf("\nadd tea leaves");

    printf("\nadd milk");

    printf("\nthe tea is ready");

    return 0;
}