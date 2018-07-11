#include <stdio.h>

int main(){
	int units;
	double bill_amount;

	printf("Enter the units of electricity consumed: ");
	scanf("%d", &units);

	if (units < 0){
		printf("Units consumed cannot be negative\n");
	}
	else if(units >= 0 && units <= 100){
		bill_amount = units * 0.2 + units;
	}
	else if(units > 100 && units <= 250){
		bill_amount = units * 0.26 + units;
	}
	else if(units > 250 && units <= 500){
		bill_amount = units * 0.4609375 + units;
	}
	else{
		bill_amount = units * 0.62173913043 + units;
	}
	
	if (units > 0)
		printf("The bill is: %f\n", bill_amount);
	else
		printf("Invalid amount!\n");

	return 0;
}