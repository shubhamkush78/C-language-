#include <stdio.h>

typedef struct {
    char name[10];
    int age;
    float salary;
} employee;

int main() {

    employee x;

    printf("Enter your name: ");
    scanf("%[A-Za-z ]", &x.name);

    printf("Enter your age: ");
    scanf("%d", &x.age);

    printf("Enter your salary: ");
    scanf("%f", &x.salary);

    printf("My Name: %s, my Age: %d and my Salary: %.2f", x.name, x.age, x.salary);


    return 0;
}