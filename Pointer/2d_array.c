#include <stdio.h>
#include <stdlib.h>

// prototype declaration
int ** allocate(int, int);
void inputValues(int **, int, int);
void printValues(int **, int, int);
void deallocate(int **, int, int);

// function definition
int ** allocate(int nRows, int nCols) {
	int **ptr;
	ptr = (int **) malloc(nRows * sizeof(int *)); // rows will be int ptr
	if (ptr == NULL) {
	printf("Unable to allocate memory. Exiting the program...\n");
	exit(1);
	}
	for (int i = 0; i < nRows; i++) {
		*(ptr+i) = (int *) malloc(nCols * sizeof(int)); // cols will be int
	}
	return ptr;
}

void inputValues(int **ptr, int nRows, int nCols) {
	for (int i = 0; i < nRows; i++) {
		for (int j = 0; j < nCols; j++) {
			printf("Enter integer value for row #%d, col #%d: ", i, j);
			scanf("%d", (*(ptr+i)+j)); 	// *(*(ptr+i)+j) is the address, (*(ptr+i)+j) is the content
		}
	}
}

void printValues(int **ptr, int nRows, int nCols) {
	for (int i = 0; i < nRows; i++) {
		for (int j = 0; j < nCols; j++) {
			printf("%6d", *(*(ptr+i)+j));	// *(*(ptr+i)+j) is the address, (*(ptr+i)+j) is the content
		}
		printf("\n");
	}
}

void deallocate(int **ptr, int nRows, int nCols) {
	for (int i = 0; i < nRows; i++) {
		free(*(ptr+i));	// only needs the base address of the row
	}
	free(ptr);
}

int main() {
	int row, col, **p;
	printf("Enter number of rows: ");
	scanf("%d", &row);
	printf("Enter number of columns: ");
	scanf("%d", &col);

	p = allocate(row, col);
	printf("\nMemory allocated, please enter data..\n");
	inputValues(p, row, col);
	
	printf("\nPrinting array..\n");
	printValues(p, row, col);

	printf("\nDeallocating values..\n");
	deallocate(p, row, col);

	// printf("\nSuccessful deallocation should result in garbage values: \n");
	// printValues(p, row, col);

	printf("\nOperations completed, exiting program..\n");
	return 0;
}