#include <stdio.h>

// prototype declaration
void func(unsigned int);	// using unsigned int as they only have positive value

// function declaration
void func(unsigned int n) {
	if (n == 0)
		return;
	printf("Recursion #%d\n", n);
	n--;
	func(n);
}

int main()
{	
	unsigned int n;
	printf("Enter number of recursions: ");
	scanf("%d", &n);

	if (n < 0) {
		printf("Invalid value, please enter a positive integer only.");
	}

	func(n);
	return 0;
}