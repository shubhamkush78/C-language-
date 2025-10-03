#include <stdio.h>

int main() {

    char a;    
    short c;
    int b;
    long long d;
    float e;
    double f;
    long double g;

    printf("address of a character is %u\n\n", &a);
    printf("address of a short int is %u\n\n", &c);
    printf("address of an integer is %u\n\n", &b);
    printf("address of a long long int is %u\n\n", &d);
    printf("address of a float is %u\n\n", &e);
    printf("address of a double is %u\n\n", &f);
    printf("address of a long double is %u\n\n", &g);

    return 0;
}