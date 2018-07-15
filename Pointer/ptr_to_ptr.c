#include <stdio.h>

int main()
{
	int *p;
	int x = 100;
	p = &x;		// p is ptr to x 

	int **k = &p;	// intializing ptr k to ptr p
	printf("%d\n", **k);

	// changing value of x by accessing k
	**k = **k + 1;
	printf("%d\n", x);

	return 0;
}