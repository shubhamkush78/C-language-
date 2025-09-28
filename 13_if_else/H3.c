#include <stdio.h>

int main() {

    int age;
    char gender;

    printf("Enter Gender(m/f) and Age: ");
    scanf("%c%d", &gender, &age);

    if((gender != 'm' && gender != 'f') && (age < 1 || age > 100)) {
        printf("Both are incorrect");
    } else if(gender != 'm' && gender != 'f') {
        printf("Invalid gender");
    } else if(age < 1 || age > 100) {
        printf("Invaid Age");
    } else {
        printf("Both are correct");
    }
    /*
    if(gender == 'f') {
        if(age <= 22) {
            printf("MB: 0 IR: 4%%");
        } else if(age > 60) {
            printf("MB: 0 IR: 12%%");
        } else {
            printf("MB: 2000 IR: 8%%");
        }
    } else {
        if(age <= 22) {
            printf("MB: 500 IR: 2%%");
        } else if(age > 60) {
            printf("MB: 2000 IR: 11%%");
        } else {
            printf("MB: 5000 IR: 6%%");
        }
    }*/

    return 0;
}