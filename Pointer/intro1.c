#include <stdio.h>

int main() {
	int var = 5;
	int* p;

	printf("%p\n", &var);	// prints the address of var in hex
	printf("%d\n", var);	// prints the value of var
	p = &var;		// assigns the address of var to pointer p
	*p = 10;		// change value of the variable whose address is p to 10 
	printf("%d\n", var);	// prints the value of var
	*p = *p + 1;	// adds 1 to value of var
	printf("%lu\n", &var);	// prints the address of var in decimal

	return 0;
}