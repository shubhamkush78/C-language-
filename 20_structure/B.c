#include <stdio.h>

//global structure definition
struct student {
    char name[10];
    int age;
    float marks;
};

void process() {
    struct student x;

    printf("~Name: %s\n", x.name);
    printf("~Age: %d\n", x.age);
    printf("~Marks: %f\n", x.marks);
}

int main() { 
    struct student x;  

    printf("Name: %s\n", x.name);
    printf("Age: %d\n", x.age);
    printf("Marks: %f\n", x.marks);

    process();

    return 0;
}