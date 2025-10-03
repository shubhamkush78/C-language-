#include <stdio.h>

int main() {

    int *p[3], a = 21, b = 78, c = 112;

    p[0] = &a;
    p[1] = &b;
    p[2] = &c;

    printf("%u %u %u\n\n", &a, &b, &c);
    printf("%u %u %u\n\n", p[0], p[1], p[2]);
    printf("%d %d %d\n\n", *p[0], *p[1], *p[2]);

    return 0;
}