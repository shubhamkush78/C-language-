#include <stdio.h>

struct student {
    char name[10];
    int age;
    float marks;
};

int main() {
    struct student x;

    printf("Name: %s\n", x.name);
    printf("Age: %d\n", x.age);
    printf("Marks: %f\n", x.marks);

    return 0;
}