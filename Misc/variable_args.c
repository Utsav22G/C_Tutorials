#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) {
	int s = 0;
	va_list ap;		// list to iterate through arguments
	va_start(ap, count);	// start iterating the va_list

	for (int i = 0; i <= count; i++) {
		s += va_arg(ap, int);		// retrieve an argument from va_list
	}
	va_end(ap);		// de-allocate the memory of va_list
	return s;
}

int main() {
	
	int k =  sum(4, 12, 32, 65, 45);
	printf("Sum = %d\n", k);

	return 0;
}