#include <stdio.h>
#include <string.h>

int main()
{
	char str[80] = "Hello, world!";
	char str1[] = "Without specifying the size";
	char str2[80], str3[80];

	// strcpy(target_str, source_str)
	strcpy(str2, "Using strcpy");
	strcpy(str3, str1);

	printf("%s\n", str);
	printf("%s\n", str1);
	printf("Message is: %s\n", str2);
	printf("Copy using strcpy: %s\n", str3);

	return 0;
}