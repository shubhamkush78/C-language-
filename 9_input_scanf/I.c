#include <stdio.h>

int main() {

    float marks;
    int age;
    char section;

    printf("Enter your age, marks and section : ");
    scanf("%d%f%c", &age, &marks, &section);

    printf("My age: %d, My marks: %.2f%% and My Section: %c", age, marks, section);

    return 0;
}