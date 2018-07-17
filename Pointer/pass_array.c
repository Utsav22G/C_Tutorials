#include <stdio.h>

void printArray(int *p_arr, int n) {
	// prints int type arrays
	printf("Content of the array is: ");
	for (int i = 0; i < n; i++) {
		printf("%4d", *(p_arr+i));
	}
	printf("\n\n");
}

int main() {
	int arr[] = {10, 20, 30, 40, 50};
	int arr2[] = {1, 2, 3, 4, 5, 6};

	printArray(arr, 5);
	printArray(arr2, 6);

	return 0;
}