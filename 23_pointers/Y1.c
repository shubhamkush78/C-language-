#include <stdio.h>

struct employee {
    char name[10];
    int age;
    float salary;
};

int main() {
    struct employee x[2] =  {{"Raju", 2, 20}, {"Jaggu", 5, 50}};
    struct employee *p = x;

    printf("1st Employee's Name: %s", (p+0)->name);
    printf("\n1st Employee's Age: %d", (p+0)->age);
    printf("\n1st Employee's Salary: %f", (p+0)->salary);
    
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    printf("2nd Employee's Name: %s", (p+1)->name);
    printf("\n2nd Employee's Age: %d", (p+1)->age);
    printf("\n2nd Employee's Salary: %f", (p+1)->salary);

    return 0;
}