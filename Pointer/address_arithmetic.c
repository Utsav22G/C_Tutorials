#include <stdio.h>

int main()
{
	int x = 10;
	int *p;
	p = &x;

	// Address of a pointer changes according to the type of pointer
	// adding 1 to integer pointer means incrementing the address by 4
	// similarly, adding 1 to double increments the address by 8
	printf("Content of p: %lu\n", p);
	p = p + 1;		// p = p + (constant * sizeof(type))
	printf("Content of p: %lu\n", p);

	// Subtracting an address from another address
	// (double *)constant means telling the compiler that I'm assinging an address to the pointer
	double *q = (double *)10000;	// p points to address 10000 in the memory
	double *r = (double *)2000; 
	printf("q - r = %lu\n", q-r);	// q - r = constant / sizeof(p)

	return 0;
}