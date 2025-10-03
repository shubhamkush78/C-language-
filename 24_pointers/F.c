#include <stdio.h>

void pro() {
    printf("Hello Ji");
}

int main() {

    //declare a function pointer variable
    void (*p)();

    //assign to a func pointer var
    p = &pro;

    //call throught function pointer
    (*p)();

    return 0;
}
