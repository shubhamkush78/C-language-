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
            : gender != 'm' && gender != 'f'
                ? printf("Age is correct but gender is incorrect..")
                : printf("Both are correct now time to implement the real code");     


    return 0;
}