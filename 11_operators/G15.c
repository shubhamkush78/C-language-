#include <stdio.h>

int main() {

    char gender;
    int age;

    printf("Enter gender and age: ");
    scanf("%c%d", &gender, &age);

    (gender != 'm' && gender != 'f') && (age < 1 || age > 100)
        ? printf("Both are incorrect...")
        : printf("May be both are correct or one of them is incorrect..."); 


    return 0;
}