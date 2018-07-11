#include <stdio.h>

/* Format of a function that returns a value:

*typeOfReturnValue* nameOfFunction(parameters) {
	// function body
	return *typeOfReturnValue
}

A function can return nothing. In that case:

void nameOfFunction(parameters) {
	// function body
}

*/

double calcSimpleInterest(double principal, double rate, double time) {
	double interest = principal * rate * time / 100.0;
	return interest;
}

int main()
{
	double p, r, t, i;

	printf("Enter principal: ");
	scanf("%lf", &p);
	printf("Enter rate of interest: ");
	scanf("%lf", &r);
	printf("Enter duration: ");
	scanf("%lf", &t);

	i = calcSimpleInterest(p, r, t); // calling the function
	printf("Interest calculated: %lf", i);

	return 0;
}