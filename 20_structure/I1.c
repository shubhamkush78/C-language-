#include <stdio.h>

struct student {
    char name[30];
    int age;
    float marks;
};

int main() {

    struct student x[3];
    int i;

    int size = sizeof(x) / sizeof(struct student);

    for(i=0; i<size; i++) {
        printf("Enter your name: ");
        scanf("%[A-Za-z ]", &x[i].name);
        printf("Enter your age: ");
        scanf("%d", &x[i].age);
        printf("Enter your marks: ");
        scanf("%f", &x[i].marks);
        printf(" ======================================== \n");
    }
    
    for(i=0; i<size; i++) { 
        printf("Name: %s, Age: %d and Marks: %f\n\n", x[i].name, x[i].age, x[i].marks);
    }

    return 0;
}