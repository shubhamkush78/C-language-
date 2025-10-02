#include <stdio.h>

void process() {
    struct student x;

    printf("~Name: %s\n", x.name);
    printf("~Age: %d\n", x.age);
    printf("~Marks: %f\n", x.marks);
}

void info() {
    struct student x;

    printf("#Name: %s\n", x.name);
    printf("#Age: %d\n", x.age);
    printf("#Marks: %f\n", x.marks);
}

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

    process();
    info();

    return 0;
}