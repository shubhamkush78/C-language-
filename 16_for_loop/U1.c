#include <stdio.h>

int main() {
	
	int n;
	char i;

	printf("Enter a number: ");
	scanf("%d", &n);

	for(i=n;i>0;i++);
		printf("%d ", i);

	return 0;
}