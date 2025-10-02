#include <stdio.h>

struct student {
    char name[10];
    int age;
};

struct student pro() {
    struct student x = {"Manmohan", 22};

    return x;
}

int main() {

    struct student y = pro();

    printf("Name: %s and Age: %d", y.name, y.age);

    return 0;
}