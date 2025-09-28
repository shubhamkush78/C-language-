#include <stdio.h>

int main() {

    int price;

    printf("Enter Book Price: ");
    scanf("%d", &price);

    price <= 200 ? printf("Buy") : price < 400 ? printf("Buy Later") : printf("Don't Buy");

    return 0;
}