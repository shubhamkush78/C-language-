#include <stdio.h>

int main() {

    float marks;

    printf("Enter marks(%%): ");
    scanf("%f", &marks);

    printf(marks >= 75 ? "Distinction" : marks >= 60 ? "First Division" : marks >= 45 ? "Second Division" : marks >= 33 ? "Third Division" : "Fail");  

    return 0;
}