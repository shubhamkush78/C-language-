#include <stdio.h>

int main() {

    int age;
    char gender;

    printf("Enter Age: ");
    scanf("%d", &age);

    fflush(stdin);

    printf("Enter gender(m/f): ");
    scanf("%c", &gender);

    gender == 'm' || gender == 'f' 
        ? age <= 22 
            ? gender == 'f' ? printf("MB: 0 IR: 4%%") : printf("MB: 500 IR: 2%%")
            : age <= 60 
                ? gender == 'f' ? printf("MB: 2000 IR: 8%%") : printf("MB: 5000 IR: 6%%")
                : gender == 'f' ? printf("MB: 0 IR: 12%%") : printf("MB: 2000 IR: 11%%")
        : printf("Invalid Gender....");

    return 0;
}