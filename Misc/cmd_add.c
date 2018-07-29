#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	if (argc == 1) {
		printf("Insufficient parameters..\n");
		exit(0);
	}

	double sum = 0.0;
	for (int i = 0; i < argc; i++) {
		sum = sum + atof(argv[i]);
	}
	// defined in stdlib: atof --> char into float, atoi --> char to int, atol --> char to long
	
	printf("Sum = %lf\n", sum);
	return 0;
}