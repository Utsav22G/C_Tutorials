#include <stdio.h>

// **envp = Environmental param 
int main(int argc, char const *argv[], char const *envp[]) {
	for (int i = 0; *envp[i] != '\0'; i++) {
		printf("%s\n", envp[i]);
	}
	return 0;
}