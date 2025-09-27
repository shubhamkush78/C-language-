#include <stdio.h>

int main() {

    float marks;
    int age;
    char section;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks(%%): ");
    scanf("%f", &marks);

    fflush(stdin);
    
    printf("Enter your section: ");
    scanf("%c", &section);

    printf("My age: %d, My marks: %.2f%% and Section: %c", age, marks, section);

    return 0;
}