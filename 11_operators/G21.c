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
                    ? age <= 22 
                        ? printf("MB: 500 IR: 2%%") 
                        : age > 60 
                            ? printf("MB: 2000 IR: 11%%") 
                            : printf("MB: 5000 IR: 6%%") 
                    : age <= 22 
                        ? printf("MB: 0 IR: 4%%") 
                        : age > 60
                            ? printf("MB: 0 IR: 12%%")
                            : printf("MB: 2000 IR: 8%%");     


    return 0;
}