#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int count = 20;
	double input[count], output[count], sum_in = 0, sum_out = 0;

	printf("Please enter maximum %d real number, terminate with 0.0\n", count);

	int i = 0;
	do
	{
		printf("\nEnter element #%d: ", i);
		scanf(" %lf", &input[i]);

		if (input[i] == 0.0)
			break;

		if (i % 2 == 0) {output[i] = 2 * input[i];}
		else {output[i] = cbrt(input[i]);}

		sum_in += input[i];
		sum_out += output[i];

		i++;
	} while (i <= count);
	printf("\n\nThere are total %d numbers given as input.\n\n", i);

	printf("	Input Array 	Output Array\n");
	for (int j = 0; j < i; j++)
	{
		printf("	%lf 	%lf\n", input[j], output[j]);
	}

	printf("\nSum of input array = %lf\n", sum_in);
	printf("Sum of output array = %lf\n", sum_out);

	return 0;
}