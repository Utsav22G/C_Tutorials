#include <stdio.h>

int main()
{
	int row, col;
	printf("Enter number of rows for the matrix (>=3 and <=10): ");
	scanf(" %d", &row);
	if (row < 3) {
		printf("Invalid number of rows!\n");
		return 0;
	}

	printf("Enter number of columns for the matrix (>=3 and <=10): ");
	scanf(" %d", &col);
	if (col < 3) {
		printf("Invalid number of columns!\n");
		return 0;
	}

	int arr[row][col];

	// collect input
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("Matrix[%d][%d]: ", i, j);
			scanf(" %d", &arr[i][j]);
		}
	}

	// display input
	printf("\nInput matrix: \n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("\t%d", arr[i][j]);
		}
		printf("\n");
	}

	// display transpose
	printf("\nTranspose matrix: \n");
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			printf("\t%d", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}