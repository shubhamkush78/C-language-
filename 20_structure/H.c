#include <stdio.h>

typedef struct {
    char name[10];
    int age;
    float salary;
} employee;

int main() {

    employee x;
    
    x.name = "gopal";   // Error
    x.age = 21; 
    x.salary = 21000;

    

    printf("My Name: %s, my Age: %d and my Salary: %.2f", x.name, x.age, x.salary);


    return 0;
}