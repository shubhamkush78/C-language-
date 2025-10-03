#include <stdio.h>

int main() {

    int x = 8, *p = &x;
    int y = 2, *q = &y;
    
    printf("*p + *q: %d\n\n", *p + *q); // 10
    printf("*p - *q: %d\n\n", *p - *q); // 6
    printf("*p * *q: %d\n\n", *p * *q); // 16
    printf("*p / *q: %d\n\n", *p / *q); // 4

    return 0;
}

