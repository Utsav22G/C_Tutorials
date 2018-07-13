#include <stdio.h>

// prototype declaration
void decToBin(unsigned int);

// function definition
void decToBin(unsigned int n) {
	if (n == 1) {
		printf("1");
		return;
	}

	decToBin(n/2);
	printf("%d", n%2);
}

/*
Binary equivalent of integer is found by dividing the number by 2 until 
you reach 0, while noting all the remainders in a consecutive order. The
binary equivalent is the order of remainders in reverse.

Eg: 12 --> 1100

2 | 12 | 
2 | 6 | 0
2 | 3 | 0
2 | 1 | 1
  | 0 | 1

Remainder sequence --> 0011
Binary --> Reverse remainder sequence --> 1100

*/

int main() {
	unsigned int n; 
	printf("Please enter the integer: ");
	scanf("%d", &n);

	decToBin(n);
	printf("\n");
	return 0;
}