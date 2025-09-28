#include <stdio.h>

int main() {

    float marks;

    printf("Enter marks(%%): ");
    scanf("%f", &marks);

    printf(marks < 33 ? "Fail" : marks < 45 ? "Third Division" : marks < 60 ? "Second Division" : marks < 75 ? "First Division" : "Distinction");  

    return 0;
}