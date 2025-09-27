#include <stdio.h>

int main() {

    float marks;
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks(%%): ");
    scanf("%f", &marks);

    printf("My age: %d and My marks: %.2f%%", age, marks);

    return 0;
}