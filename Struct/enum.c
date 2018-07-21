#include <stdio.h>

typedef enum{
	// 0, 	1, 	2,	 70,	71,		72, 73
	SUN, MON, TUES, WED=70, THURS, FRI, SAT
} days_of_week;

typedef enum{
	FALSE, TRUE
} BOOL;

BOOL isEven(int n) {
	if (n%2 == 0)
		return TRUE;
	else
		return FALSE;
}

int main() {
	days_of_week day = SAT;

	if (day == SAT || day == SUN)
		printf("Holiday!\n");
	else
		printf("Not holiday.\n");

	int n;
	printf("Enter a positive integer: "); 
	scanf("%d", &n);
	if (isEven(n))
		printf("%d is Even\n", n);
	else
		printf("%d is Odd\n", n);
	
	return 0;
}