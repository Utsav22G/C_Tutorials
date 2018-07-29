#include <stdio.h>

/*	Program prints arguments typed on the cmd	*/

// int main(int argumentcount, char **argumentvector)
int main(int argc, char *argv[]) {
	printf("argc: %d\n", argc);

	for (int i = 0; i < argc; i++) {
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	return 0;
}