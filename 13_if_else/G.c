#include <stdio.h>

int main() {

    int marks;

    printf("Enter marks(%%): ");
    scanf("%d", &marks);

    if(marks >= 75) {
        printf("Marks: %d -> Distinction", marks);
    } else if(marks >= 60) {
        printf("Marks: %d -> First Division", marks);
    } else if(marks >= 45) {
        printf("Marks: %d -> Second Division", marks);
    } else if(marks >= 33) {
        printf("Marks: %d -> Third Division", marks);
    } else {
        printf("Marks: %d -> Fail", marks);
    }

    return 0;
}