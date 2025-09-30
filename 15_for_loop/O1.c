#include <stdio.h>

int main() {

    int i, start, step, n;

    printf("Enter start value: ");
    scanf("%d", &start);

    printf("Enter step value: ");
    scanf("%d", &step);

    printf("Enter n value: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("%d~ ", start + step * i);
    }

    return 0;
}
