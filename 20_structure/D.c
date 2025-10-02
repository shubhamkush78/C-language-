#include <stdio.h>

struct student {
    char name[10];
    int age;
    float marks;
} x;

int main() {
    struct student y;

    printf("~Name: %s\n", x.name);
    printf("~Age: %d\n", x.age);
    printf("~Marks: %f\n", x.marks);

    printf("Name: %s\n", y.name);
    printf("Age: %d\n", y.age);
    printf("Marks: %f\n", y.marks);


    return 0;
}