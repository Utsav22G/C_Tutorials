#include <stdio.h>

int main()
{
	char str[80];
	printf("Please enter a string: ");
	scanf("%[^\n]", str);

	int countAlpha, countNum, countSpace;

	for (int i = 0; str[i] != '\n' ; i++) {
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			countAlpha++;
		else if (str[i] >= '0' && str[i] <= '9')
			countNum++;
		else if (str[i] == ' ')
			countSpace++;
	}

	printf("\n");
	printf("Total alphabetic characters: %d\n", countAlpha);
	printf("Total numeric characters: %d\n", countNum);
	printf("Total space characters: %d\n", countSpace);

	return 0;
}