#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 200, b = 300;
	int *p = a;
	int *q = &b;

	printf("a = %d\n", a);
	printf("&a = %lu\n", &a);
	printf("p = %lu\n", p);
	// printf("*p = %lu\n", *p);	--> causes error

	printf("b = %d\n", b);
	printf("&b = %lu\n", &b);
	printf("q = %lu\n", q);
	printf("&q = %lu\n", &q);
	printf("*q = %lu\n", *q);

	printf("Hello, World!\n");

	system("pause");
	return 0;
	//return EXIT_SUCCESS;
}
