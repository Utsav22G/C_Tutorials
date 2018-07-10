#include <stdio.h>
#include <stdlib.h>

int main() {
	int integer1, integer2;

	printf("Enter an integer: ");
	scanf("%d", &integer1);
	integer2 = integer1 + 5;
	printf("The values are: %d and %d \n", integer1, integer2);

	printf("Program complete, return to exit... \n");
	getchar(); getchar();
	return 0;
}