#include <stdio.h>

struct employee {
    char name[10];
    int age;
    struct {
        char city[10];
        char phone[10];
    } address;
};

int main() {

    struct employee x[3];
    int i;

    for(i=0;i<3;i++) {
        fflush(stdin);
        printf("Enter Name: ");
        scanf("%[A-Za-z ]", &x[i].name);

        printf("Enter Age: ");
        scanf("%d", &x[i].age);
        fflush(stdin);
        printf("Enter City: ");
        scanf("%[A-Z a-z]", &x[i].address.city);
        fflush(stdin);
        printf("Enter Phone: ");
        scanf("%[0-9]", &x[i].address.phone);
    }

    for(i=0;i<3;i++) {
        printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\nName: %s", x[i].name);
        printf("\n\nAge: %d", x[i].age);
        printf("\n\nCity: %s", x[i].address.city);
        printf("\n\nPhone: %s", x[i].address.phone);
    }

    return 0;
}