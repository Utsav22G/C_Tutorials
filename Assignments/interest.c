#include <stdio.h>

int main(){
	double rate = 0.06;
	int duration;
	double principal_amount;
	double total_interest;
	printf("Please enter the duration in years: ");
	scanf("%lf", &duration);

	printf("Please enter the principal amount of loan: ");
	scanf("%lf", &principal_amount);
	
	total_interest = (principal_amount * duration * rate);
	printf("Your total payable interest is %lf when principal_amount given as %lf, duration is %d\n", total_interest, principal_amount, duration);
	getchar();

	return 0;
}