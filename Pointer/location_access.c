#include <stdio.h>

// prototype declaration
void doWork(int, int, int, int *, int *);

// function definition
void doWork(int a, int b, int c, int *p, int *q) {
	*p = a + b + c;

	if (a>b && a>c) {
		*q = a;
	}
	else if (b>c) {
		*q = b;
	}
	else
		*q = c;
}

int main()
{	
	int x, y, z, sum, max;
	printf("Enter integers x, y, z: ");
	scanf("%d, %d, %d", &x, &y, &z);

	doWork(x, y, z, &sum, &max);
	printf("Sum is %d, Max is %d\n", sum, max);

	return 0;
}