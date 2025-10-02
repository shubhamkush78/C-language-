#include <stdio.h>
#include <string.h>

typedef struct {
    char name[10];
    int age;
    float salary;
} employee;

int main() {

    employee x;
    
    // x.name = "gopal";   // Error
    strcpy(x.name, "gopal");
    x.age = 27; 
    x.salary = 400000;
    

    printf("My Name: %s, my Age: %d and my Salary: %.2f", x.name, x.age, x.salary);


    return 0;
}