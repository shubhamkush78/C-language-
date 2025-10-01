#include <stdio.h>
#include <string.h>

int main() {
    
    char x[] = "om is a good boy";
    char y[strlen(x)];

    int i, j, start, end;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    printf("Before: %s", y);  // o/p: <Blank>

    for(i=start, j =0; i<=end; i++)
        y[j++] = x[i];

    printf("\n\nAfter: %s", y); // o/p: <PART OF THE STRING>
    
    return 0;
}