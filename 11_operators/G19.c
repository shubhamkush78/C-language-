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
                : gender == 'm' 
                    ? age <= 22 ? printf("student male") : printf("mid-age or older male") 
                    : age <= 22 ? printf("student female") : printf("mid-age or older female");     


    return 0;
}