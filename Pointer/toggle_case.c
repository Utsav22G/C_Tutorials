#include <stdio.h>

// prototype declaration
void toggleCase(char *);

// function definition
void toggleCase(char *ptr) {
	for (int i = 0; *(ptr+i) != '\0'; i++) {
		if (*(ptr+i) >='a' && *(ptr+i) <= 'z') {
			*(ptr+i) = *(ptr+i) - 32;
		}
		else if (*(ptr+i) >='A' && *(ptr+i) <= 'Z') {
			*(ptr+i) = *(ptr+i) + 32;
		}
	}
}

int main() {
	char words[100];
	printf("Please enter a sentence: ");
	scanf("%[^\n]", words);

	toggleCase(words);
	printf("Toggle case: %s\n", words);
	return 0;
}