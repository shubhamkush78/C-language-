#include <stdio.h>
#include <stdlib.h>

struct abc {
    char a;
    int b;
    double c;
};

int main() {

    struct abc *p = (struct abc*)malloc(sizeof(struct abc));

    printf("Before: a: %c  b: %d  c: %lf", p->a, p->b, p->c);

    p->a = 'k';
    p->b = 34;
    p->c = 4.5;

    printf("\n\nAfter: a: %c  b: %d  c: %lf", p->a, p->b, p->c);

    return 0;
}