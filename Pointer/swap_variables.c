#include <stdio.h>

// prototype declaration
void swap(int, int);
void swap_ptr(int *, int *);

// function definition
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap_ptr(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x = 100, y = 200;

	printf("Original: x = %d, y = %d\n", x, y);
	swap(x, y);
	printf("Unchanged after normal swap: x = %d, y = %d\n", x, y);
	swap_ptr(&x, &y);
	printf("Swapped after pointer swap: x = %d, y = %d\n", x, y);

	return 0;
}