#include <stdio.h>

struct abc {
    int p;
    int *q;
};

int main() {

    struct abc x[2];
    struct abc *a;

    x[0].p = 22;
    x[0].q = &x[0].p;

    x[1].p = 34;
    x[1].q = &x[1].p;

    a = &x[0];

    // printf("%d", *a->q);

    // printf("%d", ++*a->q);
    // printf("\n%d", x[0].p);

    // printf("%d", *a++->q);
    // printf("\n%d", *a->q);    

    // error: expected identifier before '*' token
    // printf("%d", a->*q);
    
    // error: expected identifier before '++' token
    // printf("%d", a->++q);
    
    // error: expected identifier before '(' token
    // printf("%d", a->(q++));

    // printf("%d", a->p++);
    // printf("\n%d", a->p);

    // printf("%d", ++a->p);
    // printf("\n%d", a->p);

    // printf("%d", (++a)->p);
    // printf("\n%d", a->p);

    // printf("%d", (a++)->p);
    // printf("\n%d", a->p);

    // printf("%d\n", (a->p)++);
    // printf("%d", a->p);




    printf("%d", ++(a->p));
    printf("\n%d", a->p);

    return 0;
}