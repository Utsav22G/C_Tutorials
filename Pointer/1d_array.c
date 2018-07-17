#include <stdio.h>

int main()
{
	// (x + i) --> address of the ith element
	// *(x + i) --> content of the ith element --> same as x[i]
	int x[] = {10, 20, 30, 40, 50};
	printf("x: %p, &x[0]: %p\n\n", x, &x[0]);

	printf("For x[i] == *(x+i): \n");
	for (int i = 0; i < 5; i++) {
		printf("%4d ", *(x+i));
	}
	printf("\n\n");

	printf("For i[x]: \n");
	for (int i = 0; i < 5; i++) {
		printf("%4d ", i[x]);
	}
	printf("\n");

	return 0;
}