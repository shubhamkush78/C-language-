#include <stdio.h>

int main() {

    int price;

    printf("Enter Book Price: ");
    scanf("%d", &price);

    if(price <= 200) {
        printf("Buy Book...price: %d", price);
    } else if(price < 400) {
        printf("Buy Later...price: %d", price);
    } else {
        printf("Don't Buy...price: %d", price);
    }

    return 0;
}