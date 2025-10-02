#include <stdio.h>

typedef 
    struct {
        char name[10];
        int age;
        float marks;
    }    
student; 

int main() {

    // struct student x;
    student x;
    
    printf("size of unsigned long int is: %d", sizeof(x));

    return 0;
}