#include <stdio.h>

int main() {

    float marks;
    int age;

    printf("Enter your age and marks: ");
    scanf("%d%f", &age, &marks);

    printf("My age: %d and My marks: %.2f%%", age, marks);

    return 0;
}