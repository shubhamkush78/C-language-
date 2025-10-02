#include <stdio.h>

struct student {
    char name[30];
    int age;
    float marks[3];
};

int main() {

    struct student x[3];
    int i, j;

    int st_size = sizeof(x) / sizeof(struct student);
    int m_size = sizeof(x[0].marks) / sizeof(float);

    for(i=0; i<st_size; i++) {
        fflush(stdin);
        printf("Enter your name: ");
        scanf("%[A-Za-z ]", &x[i].name);
        printf("Enter your age: ");
        scanf("%d", &x[i].age);
        
        for(j=0;j<m_size;j++) {
            printf("Enter %dst marks: ", j+1);
            scanf("%f", &x[i].marks[j]);
        }
        printf(" ======================================== \n\n");
    }
    
    for(i=0; i<st_size; i++) { 
        printf("Name: %s, Age: %d \t-\t", x[i].name, x[i].age);
        for(j=0;j<m_size;j++) {
            printf("%dst marks: %f \t", j+1, x[i].marks[j]);
        }
    }

    return 0;
}