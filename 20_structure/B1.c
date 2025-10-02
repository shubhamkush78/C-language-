#include <stdio.h>

void process() {
    //local structure definition
    struct student {
        char name[10];
        int age;
        float marks;
    };

    struct student x;

    printf("~Name: %s\n", x.name);
    printf("~Age: %d\n", x.age);
    printf("~Marks: %f\n", x.marks);
}

int main() { 
    process();

    struct student x;  

    printf("Name: %s\n", x.name);
    printf("Age: %d\n", x.age);
    printf("Marks: %f\n", x.marks);    

    return 0;
}