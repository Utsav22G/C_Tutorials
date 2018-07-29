#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

long sum(char *format, ...) {
	long s = 0;	 // biggest size among accepted input formats
	va_list ap;
	va_start(ap, format);

	for (int i = 0; i < strlen(format); i++) {
		char ch = format[i];
		switch(ch) {
			case 'i': s += va_arg(ap, int);
				break;
			case 'd': s += va_arg(ap, double);
				break;
			case 'l': s += va_arg(ap, long);
				break;
			default: printf("Invalid format..\n");
				exit(1);
		}
		
	}
	va_end(ap);		// de-allocate the memory of va_list
	return s;
}

int main() {
	
	long k =  sum("iddil", 12, 32.4, 65.3, 45, 34.65);
	printf("Sum = %lu\n", k);

	return 0;
}