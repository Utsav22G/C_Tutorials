#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p, n;
	printf("Enter number of integers: ");
	scanf("%d", &n);

	p = (int *) malloc(n * sizeof(int));
	if (p == NULL) {
		printf("Unable to allocate memory. Exiting the program...\n");
		exit(1);
	}
	/*	exit(0) --> successful termination OR normal termination
		exit(1) --> unsuccessful termination OR exceptional exit*/

	for (int i = 0; i < n; i++) {
		printf("Enter value #%d: ", i);
		scanf("%d", p+i); 	// using p+i and not &(whatever) coz p points directly to the location
	}

	printf("\nContents of the array: \n");
	for (int i = 0; i < n; ++i) {
		printf("%4d", *(p+i));
	}

	int new_num = n + 3;
	p = (int *) realloc(p, new_num * sizeof(int));
	if (p == NULL) {
		printf("Unable to allocate memory. Exiting the program...\n");
		exit(1);
	}

	*(p+n) = 10;
	*(p+n+1) = 20;
	*(p+n+2) = 30;

	printf("\n\nModified content of the array: \n");
	for (int i = 0; i < new_num; ++i) {
		printf("%4d", *(p+i));
	}
	free(p);
	
	return 0;
}