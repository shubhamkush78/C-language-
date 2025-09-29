#include <stdio.h>

#define NL printf("\n");

int main() {

    char product;
    int choice;

    printf("Press 't' for telecom or \npress 'd' for D2H: ");
    scanf("%c", &product);

    switch(product) {
        case 't':
            printf("Press 1 for Landline Connections...\n2 for Broadband Connections... \n3 for Mobile Connections...");
            scanf("%d", &choice);
            NL NL NL
            switch(choice) {
                case 1:
                    printf("In Telecom Products you chose : Landline Connections...");
                    break;
                case 2:
                    printf("In Telecom Products you chose : Broadband Connections...");
                    break;
                case 3:
                    printf("In Telecom Products you chose : Mobile Connections...");
                    break;
                default:
                    printf("In Telecom Products : your choice is incorrect...");
            }
            break;
        case 'd':
            printf("\nPress 1 for TataD2H \n2 for Airtel \n3 for JIO \n4 for DishTV: ");
            scanf("%d", &choice);
            NL NL NL
            switch(choice) {
                case 1:
                    printf("You opted TataD2H");
                    break;
                case 2:
                    printf("You opted Airtel");
                    break;
                case 3:
                    printf("You opted JIO");
                    break;
                case 4:
                    printf("You opted DishTV");
                    break;
                default:
                    printf("Free Dish");
            }
            break;

        default:
            printf("No Product Chosen...");
    }


    return 0;
}