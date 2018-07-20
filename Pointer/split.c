#include <stdio.h>
#include <stdlib.h>

#define MAX 30

// prototype declaration
void split(char *, char *, char *);

// function definition
void split(char string[], char fsplit[], char lsplit[]) {
	int i = 0;
	while(string[i] != '*') {
		fsplit[i] = string[i];
		i++;
	}
	fsplit[i] = '\0'; 	// replace '*' with null char
	i++;

	int j = 0;
	while(string[j] != '\0') {
		lsplit[j] = string[i+j];
		j++;
	}
	lsplit[j] = '\0'; 	// terminate the word
}

/*	POINTER VERSION
void split(char *ptr, char *fsplit, char *lsplit) {
	int i = 0;
	while(*(ptr+i) != '*') {
		*(fsplit+i) = *(ptr+i);
		i++;
	}
	*(fsplit+i) = '\0'; 	// replace '*' with null char
	i++;

	int j = 0;
	while(*(ptr+j) != '\0') {
		*(lsplit+j) = *(ptr+i+j);
		j++;
	}
	*(lsplit+j) = '\0'; 	// terminate the word
}
*/

int main() {
	char str[] = "book*abacus";
	char first[MAX];
	char last[MAX];

	split(str, first, last);
	printf("First part: %s\n", first);
	printf("Second part: %s\n", last);

	return 0;
}