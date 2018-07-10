#include <stdio.h>

int main()
{
	char str[80];
	printf("Please enter your name: ");
	scanf("%[^\n]", str); // [^] = Everything from the keyboard
	printf("Welcome, %s\n", str);

	/*
	Intro to regular expressions:

	[^\n] = Everything from the keyboard except newline character
	[^A] = Everything except capital A
	[a-z] / [A-Z] = Small a to z only / Capital A to Z only
	[^a-z] / [^A-Z] = Everything except small a to z / Everything except capital A to Z
	[0-9] = Numeric characters only
	[^0-9] = Non-numeric characters
	[A-Za-z0-9] = Alphanumeric characters
	[A-Za-z0-9_] = Alphanumeric characters plus underscore
	[^A-Za-z0-9_] = Non-alphanumeric characters
	[ [[\t]]] = Space and tab
	[ \t\r\n\v\f] = Whitespace characters
	*/

	return 0;
}