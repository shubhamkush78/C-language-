#include <stdio.h>

int main() {
	
	int i, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	for(i = 0; i < n; printf("~%d~ ", i++));
		

	return 0;
}