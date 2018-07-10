#include <stdio.h>

int main()
{
	int var1 = 45;
	printf("var1 = %x\n", var1);
	printf("var1 = %d\n", var1);
	printf("var1 = %o\n", var1);
	
	int var2 = 056;
	printf("var2 = %x\n", var2);
	printf("var2 = %d\n", var2);
	printf("var2 = %o\n", var2);

	int var3 = 0xa;
	printf("var3 = %x\n", var3);
	printf("var3 = %d\n", var3);
	printf("var3 = %o\n", var3);

	printf("Program complete, return to exit... \n");
	getchar();

	return 0;
}