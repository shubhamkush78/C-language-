#include <stdio.h>

struct student {
    char name[10];
    int age;
};

void pro(struct student z) {
    printf("Name: %s and Age: %d", z.name, z.age);
}

int main() {

    struct student x = {"yamraj", 1000};

    pro(x);


    return 0;
}