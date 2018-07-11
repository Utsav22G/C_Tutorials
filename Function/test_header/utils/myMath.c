/*
Function that calculates Simple Interest on supplying principal,
rate of interest, and time.
*/

double getSimpleInterest(double principal, double rate, double time) {
	double interest = principal * rate * time / 100;
	return interest;
}	