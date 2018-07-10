#include <stdio.h>

int main() {
	int a = 5, b = 2;
	float c, r;

	c = a/b;
	r = (float)a/b;		 // We ask the compiler to forcefully convert the datatype of a into float.
	// This type of casting is known as explicit casting.

	printf("c = %f, r = %f\n", c, r);
	getchar();

	return 0;
}