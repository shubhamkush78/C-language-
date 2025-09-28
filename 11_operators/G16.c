#include <stdio.h>

int main() {

    char gender;
    int age;

    printf("Enter gender and age: ");
    scanf("%c%d", &gender, &age);

    (gender != 'm' && gender != 'f') && (age < 1 || age > 100)
        ? printf("Both are incorrect...")
        : age < 1 || age > 100 
            ? printf("Age is Incorrect") 
            : printf("At least the age is correct... god knows whether the gender is correct or incorrect");


    return 0;
}