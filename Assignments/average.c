/**
Instructions: 
Write a program that will input 3 integer values from user and then will 
display the average of them. You would require to declare 3 integer variables 
for holding the integers given by the users from keyboard and then you need 
another variable for holding the average. Decide by yourself about the datatype 
of the average variable.

Finally print the average into console using printf.
*/
#include <stdio.h>

int main()
{
	int a, b, c;
	float res;

	printf("Enter integer a: ");
	scanf("%d", &a);
	
	printf("Enter integer b: ");
	scanf(" %d", &b);

	printf("Enter integer c: ");
	scanf(" %d", &c);

	res = (a + b + c) / 3;

	printf("Average of a, b, and c is %g: ", &res);
	getchar();
	
	return 0;
}