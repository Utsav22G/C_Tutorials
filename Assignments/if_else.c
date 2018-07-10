#include <stdio.h>

int main()
{
	int mood;
	printf("Enter the current mood of RoboCop: ");
	scanf("%d", &mood);
	getchar();

	if (mood == 0) {
		printf("RoboCop is sad! You're gonna be late! ;-;");
	}
	else if (mood == 1) {
		printf("RoboCop wants you to deliver half of the pizza to the neighbour. You might be late!");
	}
	else if (mood >= 2 && mood <= 5) {
		printf("RoboCop is in a great mood! You'll get a good tip!");
	}
	else if (mood == 7) {
		printf("RoboCop is making drinks. You're invited to have some in exchange for the tip.");
	}
	else if (mood == 6 || mood == 8) {
		printf("RoboCop is pissed! Better deliver the pizza and leave ASAP!");
	}
	else {
		printf("Invalid mood.");
	}

	return 0;
}