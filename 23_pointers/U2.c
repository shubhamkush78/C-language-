#include <stdio.h>

void pro(char *y) {
    printf("Name: %s", y);
}

int main() {

    char x[22] = "hidimba";

    pro(x);

    return 0;
}