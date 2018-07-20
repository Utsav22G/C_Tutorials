#include <stdio.h>
#include <stdlib.h>

/*	malloc --> allocated memory contains garbage values --> malloc(size of element) --> only 1 element allocated
	calloc --> allocated memory initialized at 0 --> calloc(num of elements to be allocated, size of each element)	*/

int main() {
	int *p, n;
	printf("Enter number of integers: ");
	scanf("%d", &n);

	p = (int *) calloc(n, sizeof(int));
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
	free(p);
	
	return 0;
}