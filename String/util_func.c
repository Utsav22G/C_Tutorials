#include <stdio.h>
#include <string.h>

int main()
{
	// Copy string
	char first[20] = "This is first", second[20];
	
	strcpy(second, first); // strcpy(target, source)
	printf("Copied string: %s\n", second);

	// Concatenate strings
	char arr1[20] = "Chocolate"; char arr2[20] = "Candy";
	
	strcat(arr1, " "); // strcat concatenates without any spaces
	strcat(arr1, arr2);
	// can also be written as 	--> 	strcat(strcat(arr1, " "), arr2);
	printf("Array #1 contains: %s\n", arr1);

	// String comparison
	char first_arr[20] = "cat"; char second_arr[20] = "zebra";

	int i =  strcmp(first_arr, second_arr);
	if (i == 0) {
		printf("Both are equal!\n");
	}
	else if (i < 0) {
		printf("%s comes first\n", first_arr);
	}
	else
		printf("%s comes first\n", second_arr);

	return 0;
}