#include <stdio.h>
#include <string.h>

struct student {
    char name[10];
    int age;
};

void pro(struct student z) {
    // z.name = "Gopal";
    strcpy(z.name, "Gopal");
    z.age = 33;
}

int main() {

    struct student x = {"yamraj", 1000};

    printf("Name: %s and Age: %d\n\n", x.name, x.age);

    pro(x);

    printf("Name: %s and Age: %d\n\n", x.name, x.age);

    return 0;
}