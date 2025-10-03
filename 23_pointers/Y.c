#include <stdio.h>

// structure pointer

struct employee {
    char name[10];
    int age;
    float salary;
};

int main() {
    struct employee x[2] =  {{"Gopal", 34, 23000}, {"Jay", 40, 45000}};

    printf("1st Employee's Name: %s", x[0].name);
    printf("\n1st Employee's Age: %d", x[0].age);
    printf("\n1st Employee's Salary: %f", x[0].salary);
    
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    printf("2nd Employee's Name: %s", x[1].name);
    printf("\n2nd Employee's Age: %d", x[1].age);
    printf("\n2nd Employee's Salary: %f", x[1].salary);

    return 0;
}