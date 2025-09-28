#include <stdio.h>

int main() {

    int price;

    printf("Enter Book Price: ");
    scanf("%d", &price);

    printf(price <= 200 ? "Buy" : price < 400 ? "Buy Later" : "Don't Buy");

    return 0;
}