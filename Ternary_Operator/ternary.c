#include <stdio.h>

int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	(age >= 13 && age < 18)? printf("Yes, teenage!") : printf("Not teenage!");

	return 0;
}