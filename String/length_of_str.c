#include <stdio.h>
#include <string.h>

int main()
{
	char str[80];
	printf("Enter a string: ");
	scanf("%[^\n]", str);

	int i;

	/*
	Method 1
	for (i = 0; str[i] != '\0'; i++);
	*/	

	// Method 2
	i = strlen(str);

	printf("The string length is: %d\n", i);

	return 0;
}