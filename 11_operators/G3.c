#include <stdio.h>

int main() {

    int price;

    printf("Enter Book Price: ");
    scanf("%d", &price);

    price<=200 ? printf("Buy") : price > 200 && price < 400 ? printf("Buy Later") : price >= 400 ? printf("Don't Buy") : printf("");

    return 0;
}