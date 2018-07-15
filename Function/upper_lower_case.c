#include <stdio.h>

// prototype declarations

int is_lower_case(char);
int is_upper_case(char);
char to_lower_case(char);
char to_upper_case(char);

// function definitions

int is_lower_case(char ch) {
	if (ch>='a' && ch<='z')
		return 1;
	else
		return 0;
}

int is_upper_case(char ch) {
	if (ch>='A' && ch<='Z')
		return 1;
	else
		return 0;
}

char to_lower_case(char ch) {
	if (is_upper_case(ch))
		return (ch + 32);
	else
		return ch;
}

char to_upper_case(char ch) {
	if (is_lower_case(ch))
		return (ch - 32);
	else	
		return ch;
}

int main()
{
	char up, low;
	printf("Enter an upper case character: ");
	scanf("%c", &up);
	printf("Lower case of %c is: %c\n\n", up, (to_lower_case(up)));

	printf("Enter a lower case character: ");
	scanf(" %c", &low);
	printf("Upper case of %c is: %c\n", low, (to_upper_case(low)));

	return 0;
}