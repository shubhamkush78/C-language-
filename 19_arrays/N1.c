#include <stdio.h>

int main() {

    printf("-%c- -%d-\n", '\0', '\0');
    printf("-%c- -%d-\n", '0', '0');
    printf("-%c- -%d-\n", 0, 0);
    printf("-%c- -%d-\n", ' ', ' ');

    return 0;
}