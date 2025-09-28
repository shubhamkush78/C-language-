#include <stdio.h>

int main() {

    int age;
    char gender;

    printf("Enter Gender(m/f) and Age: ");
    scanf("%c%d", &gender, &age);

    if(gender == 'f') {
        printf("gender: female");
    } else {
        printf("gender male");
    }

    return 0;
}