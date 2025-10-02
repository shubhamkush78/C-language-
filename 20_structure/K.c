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

    struct employee x;

    printf("Enter Name: ");
    scanf("%[A-Za-z ]", &x.name);

    printf("Enter Age: ");
    scanf("%d", &x.age);
    fflush(stdin);
    printf("Enter City: ");
    scanf("%[A-Z a-z]", &x.address.city);
    fflush(stdin);
    printf("Enter Phone: ");
    scanf("%[0-9]", &x.address.phone);

    printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\nName: %s", x.name);
    printf("\n\nAge: %d", x.age);
    printf("\n\nCity: %s", x.address.city);
    printf("\n\nPhone: %s", x.address.phone);
    return 0;
}