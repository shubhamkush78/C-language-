#include <stdio.h>

int main() {

    int i, n, step;
    char start;

    printf("Enter start character(A-Z): ");
    scanf("%c", &start);

    printf("Enter output count: ");
    scanf("%d", &n);

    printf("Enter gap in between: ");
    scanf("%d", &step);

    for(i = 0; i < n; i++) {
        printf("%c ", start);
        start = start + step;
    }

    return 0;
}