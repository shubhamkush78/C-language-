#include <stdio.h>

int main() {

    char a;    
    short c;
    int b;
    long long d;
    float e;
    double f;
    long double g;

    printf("byte size of a character is %d\n\n", sizeof(a));
    printf("byte size of a short int is %d\n\n", sizeof(c));
    printf("byte size of an integer is %d\n\n", sizeof(b));
    printf("byte size of a long long int is %d\n\n", sizeof(d));
    printf("byte size of a float is %d\n\n", sizeof(e));
    printf("byte size of a double is %d\n\n", sizeof(f));
    printf("byte size of a long double is %d\n\n", sizeof(g));

    return 0;
}