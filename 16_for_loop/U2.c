#include <stdio.h>

int main() {
	
	int n;
	char i;
	//short i;
	//int i;

	printf("Enter a number: ");
	scanf("%d", &n);

	for(i = n; i > 0; printf("%d ", i++));
		printf("%d ", i);

	return 0;
}