#include <stdio.h>

struct student {
    char name[15];
    int age;
};

int main() {
    struct student x = {"Vijay", 20};
    struct student *p = &x;

    printf("Name: %s", x.name);
    printf("\nAge: %d", x.age);
    printf("\n~~~~~~~~~~~\n");
    printf("\nName: %s", p->name);  // indirection operator: ->
    printf("\nAge: %d", p->age);

    return 0;
}