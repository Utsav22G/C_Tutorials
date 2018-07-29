#include <stdio.h>

int main()
{
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);

	switch(age) {
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18: printf("Yes, teenage!");
			break;
		default: printf("Not teenage!");
	}
	return 0;
}