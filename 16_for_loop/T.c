#include <stdio.h>

int main() {
	
	int i, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	for(i=0;i<n;i++)
		if(i%2==1)
			printf(">%d<\n", i);
		else
			printf("-%d-\n", i);

	return 0;
}