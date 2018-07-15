#include <stdio.h>

/*	Fibonacci series: 1, 1, 2, 3, 5, 8, 13, 21,...	
	Program needs to return nth term of the series.
*/

// prototype declaration
long fib(int);

// function definition
long fib(int t) {
	if (t == 1 || t == 2)
		return 1;
	return fib(t-1) + fib(t-2);
}


int main() {
	int t;
	printf("Enter the term of Fibonacci series: ");
	scanf("%d", &t);

	printf("%ld\n", fib(t));
	return 0;
}