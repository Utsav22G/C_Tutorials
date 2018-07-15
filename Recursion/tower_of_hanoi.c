#include <stdio.h>

/*	Implementation of "Tower of Hanoi" game using recursion.	*/

// prototype declaration
void toh(int, int, int, int);

// funtion definition
void toh(int n, int source, int aux, int dest) {
	if (n == 1) {
		printf("Move the disc from tower #%d to tower #%d\n", source, dest);
		return;
	}

	// move all n-1 discs to aux
	toh(n-1, source, dest, aux);

	// move the single disc from source to destination
	toh(1, source, aux, dest);

	// move the n-1 discs from auxilary to destination
	toh(n-1, aux, source, dest);

}

int main() {
	int n, source, aux, dest;

	printf("Enter the number of discs: ");
	scanf("%d", &n);
	printf("Enter the source tower: ");
	scanf("%d", &source);
	printf("Enter the auxilary tower: ");
	scanf("%d", &aux);
	printf("Enter the destination tower: ");
	scanf("%d", &dest);

	toh(n, source, aux, dest);

	return 0;
}