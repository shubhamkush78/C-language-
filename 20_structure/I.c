#include <stdio.h>

struct student {
    char name[7];
    int age;
    float marks;
};

int main() {

    struct student x[3];

    printf("First Student: ");
    printf("Name: %s, Age: %d and Marks: %f\n\n", x[0].name, x[0].age, x[0].marks);
    printf("Second Student: ");
    printf("Name: %s, Age: %d and Marks: %f\n\n", x[1].name, x[1].age, x[1].marks);
    printf("Third Student: ");
    printf("Name: %s, Age: %d and Marks: %f\n\n", x[2].name, x[2].age, x[2].marks);

    return 0;
}