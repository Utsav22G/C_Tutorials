#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b; char c;

	printf("Enter an integer: ");
	scanf("%d", &a);

	printf("Enter an alphabet: ");
	scanf(" %c", &c); 				// add space to flush the buffer

	/* printf("Enter an alphabet: ");
	fflush(stdin); --> will flush the buffer but is not a good practice
	c = getchar();
	*/

	// for using fgets, follow this link --> https://www.geeksforgeeks.org/fgets-gets-c-language/
	
	printf("Enter an integer: ");
	scanf("%d", &b);

	return 0;
}