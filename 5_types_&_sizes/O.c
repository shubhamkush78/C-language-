#include <stdio.h>

float add(float a, float b) {
    printf("=========\n");
    float sum = 0.0f;
    sum = a + b;
    return sum;
}

int main() {
    
    int x = sizeof(add(0.0f, 0.0f));

    printf("%d", x);

    return 0;
}